section .data
    message: DB "Hello, World", 0xA
    message_length EQU $ - message

global main

section .text

    main:
    mov rax, 4              ; use the write syscall
    mov rbx, 1              ; use stdout as the fd
    mov rcx, message        ; use the message as the buffer
    mov rdx, message_length ; and supply the length
    int 0x80                ; invoke the syscall

    mov rax, 1
    mov rbx, 0
    int 0x80
    ret
