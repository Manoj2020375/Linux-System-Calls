section .bss
    bit_srg resb 8

section .data
    a db "in B()",10

section .text
    global B 
    extern C

B:
    mov [bit_srg], rdi
   
    mov rax, 1
    mov rdi, 1
    mov rsi, a
    mov rdx, 7
    syscall

    push C 

    mov rax, 1
    mov rdi, 1
    mov rsi, bit_srg
    mov rdx, 8
    syscall
    ret