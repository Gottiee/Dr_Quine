%define NAME "Grace_kid.asm"
%define CODE "%%define NAME %2$cGrace_kid.asm%2$c%1$c%%define CODE %2$c%3$s%2$c%1$c%1$c%%macro START 0%1$cextern fprintf%1$cextern fopen%1$cextern fclose%1$csection .data%1$c	name db NAME, 0%1$c	code db CODE, 0%1$c	mode db %2$cw%2$c, 0%1$cglobal main%1$csection .text%1$cmain:%1$c	sub rsp, 8%1$c	mov rdi, name%1$c	mov rsi, mode%1$c	call fopen%1$c	cmp rax, 0%1$c	je exit%1$c	mov rbx, rax%1$c	mov rdi, rbx%1$c	mov rsi, code%1$c	mov rdx, 10%1$c	mov rcx, 34%1$c	mov r8, code%1$c	call fprintf%1$c	mov rdi, rbx%1$c	call fclose%1$c%1$cexit:%1$c	mov rax, 60%1$c	mov rdi, 0%1$c	syscall%1$c%1$c%%endmacro%1$c%1$c; comment%1$cSTART"

%macro START 0
extern fprintf
extern fopen
extern fclose
section .data
	name db NAME, 0
	code db CODE, 0
	mode db "w", 0
global main
section .text
main:
	sub rsp, 8
	mov rdi, name
	mov rsi, mode
	call fopen
	cmp rax, 0
	je exit
	mov rbx, rax
	mov rdi, rbx
	mov rsi, code
	mov rdx, 10
	mov rcx, 34
	mov r8, code
	call fprintf
	mov rdi, rbx
	call fclose

exit:
	mov rax, 60
	mov rdi, 0
	syscall

%endmacro

; comment
START