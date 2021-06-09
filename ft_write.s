global _ft_write
WRITE	equ 0x2000004

section .text
extern ___error
_ft_write:	mov	rax, WRITE
			syscall
			jc errno
			ret

errno:		mov r15, rax
			push -1
			call ___error
			mov qword[rax], r15
			pop rax
			ret
