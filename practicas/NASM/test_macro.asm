%include "io.inc"

section .data
msg db 'Hello Macro!', 0

section .text
    global CMAIN

CMAIN:
    mov ebp, esp
    PRINT_STRING msg
    NEWLINE
    xor eax, eax
    ret