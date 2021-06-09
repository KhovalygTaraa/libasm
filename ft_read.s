global _ft_read
READ equ 0x2000003
extern ___error
section .text

_ft_read:	mov rax, READ
			syscall
			jc error
			ret
error:		push rax
			call ___error
			pop qword[rax]
			mov rax, -1
			ret
