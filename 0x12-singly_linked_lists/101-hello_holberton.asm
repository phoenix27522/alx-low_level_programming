section .data
    hello db "Hello, Holberton",0
    format db "%s\n",0

section .text
    global main
    extern printf

main:
    push rdi
    mov rdi, format
    mov rsi, hello
    xor rax, rax
    call printf                 
    pop rdi                     
    ret                         

