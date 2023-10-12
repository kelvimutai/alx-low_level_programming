#include <stdio.h>

int main() {
    int a = 1;
    int b = 2;
    int count = 2;  /* We've already got the first two numbers (1 and 2) */

    printf("%d, %d, ", a, b);

    while (count < 98) {
        int next = a + b;
        a = b;
        b = next;

        count++;

        if (count < 98) {
            /* Print a comma and a space for all elements except the last one */
            printf("%d, ", next);
        } else {
            /* Print a new line for the last element */
            printf("%d\n", next);
        }
    }

    return 0;
}
