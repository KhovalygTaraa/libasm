global _ft_strcpy

section .text
_ft_strcpy:
			cmp rsi, 0
			je	error
			xor rax, rax

loop:		cmp byte [rsi + rax], 0
			je return
			mov bl, byte[rsi + rax]
			mov byte[rdi + rax], bl
			inc rax
			jmp loop

error:		xor rax, rax
			ret
return:		mov byte[rdi + rax], 0
			mov rax, rdi
			ret
