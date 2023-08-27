#include <stdio.h>

/**
* main - check the code.
*
* Return: Always 0.
*/

void print_times_table(int n) {
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

int main() {
    print_times_table(3);
}
_putchar('\n');
{
print_times_table(5);
}
_putchar('\n');
{
print_times_table(98);
}
_putchar('\n');
{
print_times_table(12);
}
return (0);
}
