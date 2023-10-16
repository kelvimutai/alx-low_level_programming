#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char expectedPassword[] = "Tada! Congrats";

    // Seed the random number generator with the current time
    srand(time(NULL));

    char generatedPassword[sizeof(expectedPassword)];
    int passwordLength = sizeof(expectedPassword) - 1; // -1 for the null terminator

    for (int i = 0; i < passwordLength; i++) {
        generatedPassword[i] = (rand() % 94) + 32; /* Generate a random printable ASCII character */
    }
    generatedPassword[passwordLength] = '\0'; // Null-terminate the string

    // Check if the generated password matches the expected password
    if (strcmp(generatedPassword, expectedPassword) == 0) {
        printf("Generated Password: %s\n", generatedPassword);
        printf("Password Match: Tada! Congrats\n");
    } else {
        printf("Generated Password: %s\n", generatedPassword);
        printf("Wrong password\n");
    }

    return 0;
}
