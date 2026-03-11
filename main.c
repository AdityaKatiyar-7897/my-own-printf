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

void my_putstr(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        my_putchar(str[i]);
    }
}

void main()
{
    my_putstr("Hello world\n");
}
