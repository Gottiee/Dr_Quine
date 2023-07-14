section .data
	code db "section .data%1$c	code db %2$c%3$s%2$c, 0x0%1$c%1$csection .text%1$c	global main%1$c	extern printf%1$c	extern fflush%1$c	; outside com%1$c%1$cmain:%1$c	; inside com%1$c	sub rsp, 8%1$c%1$c_print:%1$c	mov rdi, code%1$c	mov rsi, 10%1$c	mov rdx, 34%1$c	mov rcx, code%1$c	xor eax, eax%1$c	call printf%1$c	add rsp, 8%1$c	mov edi, 0%1$c	call fflush%1$c	mov rax, 60%1$c	mov rdi, 0%1$c	syscall", 0x0

section .text
	global main
	extern printf
	extern fflush
	; outside com

main:
	; inside com
	sub rsp, 8

_print:
	mov rdi, code
	mov rsi, 10
	mov rdx, 34
	mov rcx, code
	xor eax, eax
	call printf
	add rsp, 8
	mov edi, 0
	call fflush
	mov rax, 60
	mov rdi, 0
	syscall