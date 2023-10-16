#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char expectedPassword[] = "Tada! Congrats";
    char generatedPassword[sizeof(expectedPassword)];
    int passwordLength = sizeof(expectedPassword) - 1;

    srand(time(NULL));

    int i;
    for (i = 0; i < passwordLength; i++) {
        generatedPassword[i] = (rand() % 94) + 32;
    }
    generatedPassword[passwordLength] = '\0';

    if (strcmp(generatedPassword, expectedPassword) == 0) {
        printf("Generated Password: %s\n", generatedPassword);
        printf("Password Match: Tada! Congrats\n");
    } else {
        printf("Generated Password: %s\n", generatedPassword);
        printf("Wrong password\n");
    }

    return 0;
}
