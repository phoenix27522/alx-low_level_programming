#include <stdio.h>
#include <string.h>
#include <openssl/sha.h>

void sha256_to_hex(char *buffer, unsigned char *sha256_hash) {
    for (int i = 0; i < 16; i++) {
        sprintf(&buffer[i * 2], "%02x", sha256_hash[i]);
    }
    buffer[32] = '\0'; // Null-terminate the string
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <password>\n", argv[0]);
        return 1;
    }

    // Get the provided password from the command-line argument
    char *password = argv[1];
    unsigned char sha256_hash[16];
    char sha256_hex[33];

    // Calculate the MD5 hash of the provided password
    SHA256(password, strlen(password), sha256_hash);

    // Convert the MD5 hash to its hexadecimal representation
    sha256_to_hex(sha256_hex, sha256_hash);

    // Compare the computed MD5 hash with the valid MD5 hash
    if (strcmp(sha256_hex, "7b774effe4a349c6dd82ad4f4f21d34c") == 0) {
        printf("Password OK :)\n");
        return 0;
    } else {
        printf("Invalid password :(\n");
        return 1;
    }
}

