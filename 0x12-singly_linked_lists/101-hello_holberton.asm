section .data
	format db 'Hello, %s, 0
	name db 'Holberton', 0

section .text
	global main
	extern printf

main:
	mov edi, format
	xor eax, eax
	call printf
	mov eax, 0
	ret
