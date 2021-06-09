global _ft_strcmp
extern _ft_strlen
section .text
; rdi = first arg
; rsi = second arg
_ft_strcmp:		xor rax, rax

loop:			mov r15b, byte[rsi + rax]
				mov r14b, byte[rdi + rax]
				cmp r14b, r15b
				jne noequal
				cmp r15b, 0
				je equal
				inc rax
				jmp loop

noequal:		cmp r14b, 0
				je difflen
				cmp r15b, 0
				je difflen

				sub r14b, r15b
				js negative	
				mov al, r14b
				ret

difflen:		push 0
				call _ft_strlen
				mov r13, rax
				mov rdi, rsi
				call _ft_strlen
				mov r12, rax
				pop rax

				cmp r13, r12
				jg greater
				mov rax, -1
				ret

greater:		mov rax, 1
				ret

negative:		
				mov al, r14b
				neg al
				neg rax
				ret

noexist:		
				ret
equal:			xor rax, rax
				ret
