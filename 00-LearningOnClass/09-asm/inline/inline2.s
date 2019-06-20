	.file	"inline.c"
	.text
	.def	__main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
.LC0:
	.ascii "sum = %d\12\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$56, %rsp
	.seh_stackalloc	56
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	movl	%ecx, -48(%rbp)
	movq	%rdx, -40(%rbp)
	call	__main
	movl	$10, -84(%rbp)
	movl	$20, -88(%rbp)
	movl	$0, -92(%rbp)
	movl	-84(%rbp), %eax
	movl	-88(%rbp), %edx
	movl	%edx, %ebx
/APP
 # 7 "inline.c" 1
	addl %ebx,%eax;
 # 0 "" 2
/NO_APP
	movl	%eax, -92(%rbp)
	movl	-92(%rbp), %eax
	movl	%eax, %edx
	leaq	.LC0(%rip), %rcx
	call	printf
	movl	$0, %eax
	addq	$56, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_endproc
	.ident	"GCC: (GNU) 7.3.0"
	.def	printf;	.scl	2;	.type	32;	.endef
