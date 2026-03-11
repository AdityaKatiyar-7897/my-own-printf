void my_putchar(char c)
{
    __asm__ volatile (
        "mov $1, %%rax\n"
        "mov $1, %%rdi\n"
        "lea %0, %%rsi\n"
        "mov $1, %%rdx\n"
        "syscall\n"
        :
        : "m" (c)
        : "rax", "rdi", "rsi", "rdx"
    );
}

void main()
{
    my_putchar('H');
    my_putchar('i');
    my_putchar('!');
}
