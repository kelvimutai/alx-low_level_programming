#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 12

char generateRandomChar() {
    return (rand() % 94) + 32;
}

void generateRandomPassword(char *password, int length) {
    int i; 
    for (i = 0; i < length; i++) {
        password[i] = generateRandomChar();
    }
    password[length] = '\0';
}

int main() {
    char password[PASSWORD_LENGTH + 1];
    srand(time(NULL));

    generateRandomPassword(password, PASSWORD_LENGTH);
    
    printf("Generated Password: %s\n", password);

    return 0;
}
