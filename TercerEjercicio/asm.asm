.386
.MODEL FLAT, C
.STACK
.DATA
	tres DD 3
.CODE
	
	ejecutivo PROC
		call administrativo
		mov ebx, 2
		mul ebx
		ret
	ejecutivo ENDP

	administrativo PROC
		push ebp
		mov ebp, esp
		mov ebx, 20
		add eax, ebx
		pop ebp
		ret
	administrativo ENDP	
	
	operario PROC
		call administrativo
		cdq
		idiv tres
		mov ebx, 30
		add eax, ebx
		ret
	operario ENDP

END