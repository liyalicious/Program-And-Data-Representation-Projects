	.file	"threexplusone.cpp"
	.text
	.globl	_Z9countStepi
	.align	16, 0x90
	.type	_Z9countStepi,@function
_Z9countStepi:                          # @_Z9countStepi
# BB#0:
	push	EBP
	mov	EBP, ESP
	sub	ESP, 8
	mov	EAX, DWORD PTR [EBP + 8]
	cmp	EAX, 1
	je	.LBB0_5
# BB#1:
	test	AL, 1
	jne	.LBB0_3
# BB#2:
	mov	ECX, EAX
	shr	ECX, 31
	add	ECX, EAX
	sar	ECX
	mov	DWORD PTR [ESP], ECX
	jmp	.LBB0_4
.LBB0_3:
	lea	EAX, DWORD PTR [EAX + 2*EAX + 1]
	mov	DWORD PTR [ESP], EAX
.LBB0_4:
	call	_Z9countStepi
	inc	EAX
	jmp	.LBB0_6
.LBB0_5:
	xor	EAX, EAX
.LBB0_6:
	add	ESP, 8
	pop	EBP
	ret
.Ltmp0:
	.size	_Z9countStepi, .Ltmp0-_Z9countStepi

	.globl	main
	.align	16, 0x90
	.type	main,@function
main:                                   # @main
.Ltmp4:
	.cfi_startproc
# BB#0:
	push	EBP
.Ltmp5:
	.cfi_def_cfa_offset 8
.Ltmp6:
	.cfi_offset ebp, -8
	mov	EBP, ESP
.Ltmp7:
	.cfi_def_cfa_register ebp
	push	EDI
	push	ESI
	sub	ESP, 16
.Ltmp8:
	.cfi_offset esi, -16
.Ltmp9:
	.cfi_offset edi, -12
	mov	DWORD PTR [ESP], 13
	call	_Z9countStepi
	mov	DWORD PTR [ESP + 4], EAX
	mov	DWORD PTR [ESP], _ZSt4cout
	call	_ZNSolsEi
	mov	ESI, EAX
	mov	EAX, DWORD PTR [ESI]
	mov	EAX, DWORD PTR [EAX - 12]
	mov	EDI, DWORD PTR [EAX + ESI + 124]
	test	EDI, EDI
	je	.LBB1_5
# BB#1:                                 # %_ZSt13__check_facetISt5ctypeIcEERKT_PS3_.exit
	cmp	BYTE PTR [EDI + 28], 0
	je	.LBB1_3
# BB#2:
	mov	AL, BYTE PTR [EDI + 39]
	jmp	.LBB1_4
.LBB1_3:
	mov	DWORD PTR [ESP], EDI
	call	_ZNKSt5ctypeIcE13_M_widen_initEv
	mov	EAX, DWORD PTR [EDI]
	mov	DWORD PTR [ESP], EDI
	mov	DWORD PTR [ESP + 4], 10
	call	DWORD PTR [EAX + 24]
.LBB1_4:                                # %_ZNKSt5ctypeIcE5widenEc.exit
	movsx	EAX, AL
	mov	DWORD PTR [ESP + 4], EAX
	mov	DWORD PTR [ESP], ESI
	call	_ZNSo3putEc
	mov	DWORD PTR [ESP], EAX
	call	_ZNSo5flushEv
	xor	EAX, EAX
	add	ESP, 16
	pop	ESI
	pop	EDI
	pop	EBP
	ret
.LBB1_5:
	call	_ZSt16__throw_bad_castv
.Ltmp10:
	.size	main, .Ltmp10-main
.Ltmp11:
	.cfi_endproc
.Leh_func_end1:

	.align	16, 0x90
	.type	_GLOBAL__I_a,@function
_GLOBAL__I_a:                           # @_GLOBAL__I_a
.Ltmp14:
	.cfi_startproc
# BB#0:
	push	EBP
.Ltmp15:
	.cfi_def_cfa_offset 8
.Ltmp16:
	.cfi_offset ebp, -8
	mov	EBP, ESP
.Ltmp17:
	.cfi_def_cfa_register ebp
	sub	ESP, 24
	mov	DWORD PTR [ESP], _ZStL8__ioinit
	call	_ZNSt8ios_base4InitC1Ev
	mov	DWORD PTR [ESP + 8], __dso_handle
	mov	DWORD PTR [ESP + 4], _ZStL8__ioinit
	mov	DWORD PTR [ESP], _ZNSt8ios_base4InitD1Ev
	call	__cxa_atexit
	add	ESP, 24
	pop	EBP
	ret
.Ltmp18:
	.size	_GLOBAL__I_a, .Ltmp18-_GLOBAL__I_a
.Ltmp19:
	.cfi_endproc
.Leh_func_end2:

	.type	_ZStL8__ioinit,@object  # @_ZStL8__ioinit
	.local	_ZStL8__ioinit
	.comm	_ZStL8__ioinit,1,1
	.section	.ctors,"aw",@progbits
	.align	4
	.long	_GLOBAL__I_a

	.section	".note.GNU-stack","",@progbits
