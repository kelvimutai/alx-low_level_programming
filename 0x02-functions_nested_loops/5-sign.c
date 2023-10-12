#include <stdio.h>
#include <limits.h> // For INT_MAX and INT_MIN

int print_sign(int n);

void test_print_sign(int n) {
    printf("Correct output - case: print_sign(%d);\n", n);
    int result = print_sign(n);
    switch (result) {
        case 1:
            putchar('+');
            break;
        case 0:
            putchar('0');
            break;
        case -1:
            putchar('-');
            break;
        default:
            printf("Unexpected result: %d\n", result);
    }
    printf("\n");
}

int main() {
    test_print_sign(98);
    test_print_sign(0);
    test_print_sign(0xff);
    test_print_sign(-1);
    test_print_sign(99);
    test_print_sign(INT_MAX);
    test_print_sign(INT_MIN);
    
    return 0;
}
