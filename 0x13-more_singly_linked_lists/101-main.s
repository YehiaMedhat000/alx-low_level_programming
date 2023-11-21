	.file	"101-main.c"
	.text
	.def	__main;	.scl	2;	.type	32;	.endef
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$64, %rsp
	.seh_stackalloc	64
	.seh_endprologue
	call	__main
	movq	$0, -24(%rbp)
	leaq	-24(%rbp), %rax
	movl	$0, %edx
	movq	%rax, %rcx
	call	add_nodeint
	leaq	-24(%rbp), %rax
	movl	$1, %edx
	movq	%rax, %rcx
	call	add_nodeint
	leaq	-24(%rbp), %rax
	movl	$2, %edx
	movq	%rax, %rcx
	call	add_nodeint
	leaq	-24(%rbp), %rax
	movl	$3, %edx
	movq	%rax, %rcx
	call	add_nodeint
	leaq	-24(%rbp), %rax
	movl	$4, %edx
	movq	%rax, %rcx
	call	add_nodeint
	leaq	-24(%rbp), %rax
	movl	$98, %edx
	movq	%rax, %rcx
	call	add_nodeint
	leaq	-24(%rbp), %rax
	movl	$402, %edx
	movq	%rax, %rcx
	call	add_nodeint
	leaq	-24(%rbp), %rax
	movl	$1024, %edx
	movq	%rax, %rcx
	call	add_nodeint
	movq	-24(%rbp), %rax
	movq	%rax, %rcx
	call	print_listint_safe
	movq	$0, -16(%rbp)
	leaq	-16(%rbp), %rax
	movl	$0, %edx
	movq	%rax, %rcx
	call	add_nodeint
	movq	%rax, -8(%rbp)
	leaq	-16(%rbp), %rax
	movl	$1, %edx
	movq	%rax, %rcx
	call	add_nodeint
	leaq	-16(%rbp), %rax
	movl	$2, %edx
	movq	%rax, %rcx
	call	add_nodeint
	leaq	-16(%rbp), %rax
	movl	$3, %edx
	movq	%rax, %rcx
	call	add_nodeint
	leaq	-16(%rbp), %rax
	movl	$4, %edx
	movq	%rax, %rcx
	call	add_nodeint
	leaq	-16(%rbp), %rax
	movl	$98, %edx
	movq	%rax, %rcx
	call	add_nodeint
	movq	%rax, %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, 8(%rax)
	leaq	-16(%rbp), %rax
	movl	$402, %edx
	movq	%rax, %rcx
	call	add_nodeint
	leaq	-16(%rbp), %rax
	movl	$1024, %edx
	movq	%rax, %rcx
	call	add_nodeint
	movq	-16(%rbp), %rax
	movq	%rax, %rcx
	call	print_listint_safe
	movl	$0, %eax
	addq	$64, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.ident	"GCC: (x86_64-posix-seh, Built by strawberryperl.com project) 8.3.0"
	.def	add_nodeint;	.scl	2;	.type	32;	.endef
	.def	print_listint_safe;	.scl	2;	.type	32;	.endef
