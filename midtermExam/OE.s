	.file	"OE.c"
	.text
	.globl	a
	.data
	.align 4
a:
	.long	4
	.globl	b
	.align 4
b:
	.long	1
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC0:
	.ascii "%d is Even.\0"
.LC1:
	.ascii "%d is Odd.\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	call	__main
	movl	a(%rip), %eax
	andl	$1, %eax
	testl	%eax, %eax
	jne	.L2
	movl	a(%rip), %eax
	movl	%eax, %edx
	leaq	.LC0(%rip), %rcx
	call	printf
	jmp	.L3
.L2:
	movl	a(%rip), %eax
	movl	%eax, %edx
	leaq	.LC1(%rip), %rcx
	call	printf
.L3:
	movl	$0, %eax
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.ident	"GCC: (GNU) 7.4.0"
	.def	printf;	.scl	2;	.type	32;	.endef
