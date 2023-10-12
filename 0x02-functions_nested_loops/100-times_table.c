#include <stdio.h>

{
    for (int i = 0; i <= upTo; i++) {
        int result = n * i;
        printf("%d x %d = %d\n", n, i, result);
    }
    return 0;
}
