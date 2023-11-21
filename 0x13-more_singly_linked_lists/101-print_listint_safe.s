	.file	"101-print_listint_safe.c"
	.text
	.globl	find_listint_loop_pl
	.def	find_listint_loop_pl;	.scl	2;	.type	32;	.endef
	.seh_proc	find_listint_loop_pl
find_listint_loop_pl:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$16, %rsp
	.seh_stackalloc	16
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	cmpq	$0, 16(%rbp)
	jne	.L2
	movl	$0, %eax
	jmp	.L3
.L2:
	movq	16(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, -16(%rbp)
	jmp	.L4
.L9:
	movq	-16(%rbp), %rax
	movq	8(%rax), %rax
	cmpq	%rax, -16(%rbp)
	jne	.L5
	movq	-16(%rbp), %rax
	jmp	.L3
.L5:
	movq	16(%rbp), %rax
	movq	%rax, -8(%rbp)
	jmp	.L6
.L8:
	movq	-16(%rbp), %rax
	movq	8(%rax), %rax
	cmpq	%rax, -8(%rbp)
	jne	.L7
	movq	-16(%rbp), %rax
	movq	8(%rax), %rax
	jmp	.L3
.L7:
	movq	-8(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, -8(%rbp)
.L6:
	movq	-8(%rbp), %rax
	cmpq	-16(%rbp), %rax
	jne	.L8
	movq	-16(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, -16(%rbp)
.L4:
	cmpq	$0, -16(%rbp)
	jne	.L9
	movl	$0, %eax
.L3:
	addq	$16, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC0:
	.ascii "[%p] %d\12\0"
.LC1:
	.ascii "-> [%p] %d\12\0"
	.text
	.globl	print_listint_safe
	.def	print_listint_safe;	.scl	2;	.type	32;	.endef
	.seh_proc	print_listint_safe
print_listint_safe:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$64, %rsp
	.seh_stackalloc	64
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	$0, -8(%rbp)
	movq	16(%rbp), %rcx
	call	find_listint_loop_pl
	movq	%rax, -24(%rbp)
	movq	$0, -8(%rbp)
	movl	$1, -12(%rbp)
	jmp	.L11
.L15:
	movq	16(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, %r8d
	movq	16(%rbp), %rdx
	leaq	.LC0(%rip), %rcx
	call	printf
	movq	16(%rbp), %rax
	cmpq	-24(%rbp), %rax
	jne	.L12
	movl	$0, -12(%rbp)
.L12:
	movq	16(%rbp), %rax
	movq	8(%rax), %rax
	movq	%rax, 16(%rbp)
	addq	$1, -8(%rbp)
.L11:
	movq	16(%rbp), %rax
	cmpq	-24(%rbp), %rax
	jne	.L13
	cmpl	$0, -12(%rbp)
	je	.L14
.L13:
	cmpq	$0, 16(%rbp)
	jne	.L15
.L14:
	cmpq	$0, -24(%rbp)
	je	.L16
	movq	16(%rbp), %rax
	movl	(%rax), %eax
	movl	%eax, %r8d
	movq	16(%rbp), %rdx
	leaq	.LC1(%rip), %rcx
	call	printf
.L16:
	movq	-8(%rbp), %rax
	addq	$64, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.ident	"GCC: (x86_64-posix-seh, Built by strawberryperl.com project) 8.3.0"
	.def	printf;	.scl	2;	.type	32;	.endef
