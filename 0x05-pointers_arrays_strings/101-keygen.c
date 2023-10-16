#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

char generateRandomChar() {
    return (rand() % 94) + 32; /* Generate a random printable ASCII character */
}

void generateRandomPassword(char *password, int length) {
    int i; // Declare 'i' before the 'for' loop
    for (i = 0; i < length; i++) {
        password[i] = generateRandomChar();
    }
    password[length] = '\0'; // Null-terminate the string
}

int main() {
    char password[PASSWORD_LENGTH + 1]; // +1 for the null terminator
    srand(time(NULL)); // Seed the random number generator with the current time

    generateRandomPassword(password, PASSWORD_LENGTH);
    
    printf("Generated Password: %s\n", password);

    return 0;
}
