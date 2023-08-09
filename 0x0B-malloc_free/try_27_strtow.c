#include <stdio.h>
#include <stdlib.h>


int is_space(char s);
int start_index(char *s);
int end_index(char *s);
char *extracted_word(char *s);


int is_space(char s)
{
    if (s == ' ') {
        return 1;
    }
    return 0;
}

int start_index(char *s)
{
    int i = 0;
    while (s[i] != '\0') {
        if (is_space(s[i])) {
            return (i + 1);
        }
        i++;
    }
    return -1;
}

int end_index(char *s)
{
    int i = start_index(s);
    if (i == -1) {
        return -1;
    }
    
    while (s[i] != '\0' && !is_space(s[i])) {
        i++;
    }
    
    if (s[i] == '\0') {
        return i - 1; /* End of the string */
    }
    
    return i - 2; /* Just before the space character */
}

char *extracted_word (char *s)
{
    char *word;
    int i;
    int j = 0;
    int s_index = start_index(s);
    int e_index = end_index(s);
    
    if (s_index == -1 || e_index == -1) {
        return NULL; /* No word found */
    }
    
    word = (char*)malloc((e_index - s_index + 2) *sizeof(char));
    if(word == NULL){
      return (NULL);
    }
    
    for (i= s_index; i <= e_index; i++){
      word[j] = s[i];
      j++;
    }
    word[j] = '\0';
    
    return (word);
}
    
int main() {
    char s[] = "hello world";
     
    int s_index;
    int e_index;
    char *extract_word;

    s_index = start_index(s);
    if (s_index != -1) {
        printf("The start index is %d.\n", s_index);
    } else {
        printf("No space is found, so no new word.\n");
    }
    
    e_index = end_index(s);
    if (e_index != -1) {
        printf("The end index is %d.\n", e_index);
    } else {
        printf("No space is found, so no new word.\n");
    }
    
    extract_word = extracted_word(s);
    if (extract_word != NULL) {
        printf("Extracted word: %s\n", extract_word);
        
        free(extract_word); /* Remember to free the allocated memory */
    } else {
        printf("No word found.\n");
    }
    
    
    return 0;
}
