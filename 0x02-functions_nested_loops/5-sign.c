#include <main.h>
#include <stdio.h>

int print_sign(int n)
{
    if (n > 0) {
        putchar('+');
        return 1;
    } else if (n == 0) {
        putchar('0');
        return 0;
    } else {
        putchar('-');
        return -1;
    }
}

int main() {
    /* Testing the print_sign function */
    print_sign(98);
    print_sign(0);
    print_sign(0xff);
    print_sign(-1);
    print_sign(99);
    print_sign(INT_MAX);
    print_sign(INT_MIN);
    
    return 0;
}
