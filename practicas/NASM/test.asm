
section .data

msg db '¡Hello Jaime!', 0xa
len equ $ - msg


section .text
    global main

main:
    mov edx, len
    mov ecx, msg
    mov ebx, 1
    mov eax, 4
    int 0x80

/*
nasm -f elf64 -o test.o test.nasm
ld -o test test.o
./test
*/