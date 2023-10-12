#include <stdio.h>

int main() {
    long long a = 1;
    long long b = 2;
    int count = 2;  // We've already got the first two numbers (1 and 2)

    printf("%lld, %lld, ", a, b);

    while (count < 98) {
        long long next = a + b;
        a = b;
        b = next;

        count++;

        if (count < 98) {
            // Print a comma and a space for all elements except the last one
            printf("%lld, ", next);
        } else {
            // Print a new line for the last element
            printf("%lld\n", next);
        }
    }

    return 0;
}
