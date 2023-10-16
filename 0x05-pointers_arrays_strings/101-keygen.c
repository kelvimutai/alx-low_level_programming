#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

char generateRandomChar() {
    return (rand() % 94) + 32; // Generate a random printable ASCII character
}

void generateRandomPassword(char *password, int length) {
    for (int i = 0; i < length; i++) {
        password[i] = generateRandomChar();
    }
    password[length] = '\0'; // Null-terminate the string
}

int main() {
    srand(time(NULL)); // Seed the random number generator with the current time

    char password[PASSWORD_LENGTH + 1]; // +1 for the null terminator

    generateRandomPassword(password, PASSWORD_LENGTH);
    
    printf("Generated Password: %s\n", password);

    return 0;
}
