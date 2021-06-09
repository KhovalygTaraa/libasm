global _ft_strdup
extern _malloc
extern _ft_strlen
extern ___error

section .text
_ft_strdup:	push 0
			call _ft_strlen
			inc rax
			mov r14, rdi
			mov rdi, rax
			call _malloc
			pop r15
			cmp rax, 0
			je error
loop:		mov r13b, byte[r14 + r15]
			mov byte [rax + r15], r13b
			cmp r13b, 0
			je end
			inc r15
			jmp loop
error:		push 12
			call ___error
			pop qword[rax]
			mov rax, 0
end:		ret

