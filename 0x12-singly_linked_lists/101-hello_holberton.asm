section .data
    format db "Hello, Holberton",10,0

section .text
    global main
    extern printf

main:
    push rbp
    mov rdi, format
    xor rax, rax
    call printf
    pop rbp
    ret
