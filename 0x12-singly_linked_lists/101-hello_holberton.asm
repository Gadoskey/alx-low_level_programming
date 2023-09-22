section .data
    format db "Hello, Holberton", 10
section .text
    global main
    extern printf
main:
    push rbp
    mov rdi, format
    call printf
    pop rbp
    ret
