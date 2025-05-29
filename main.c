#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "circular_queue.h"

int main() {
    char queue[SIZE];
    char msg[1000];
    char output[1000];
    int key;
    char choice;

    // Call the function
    initQueue(queue);

// For testing print the queue

void initQueue(char queue[]) {
    for (int i = 0; i < SIZE; i++) {
        queue[i] = 'A' + i;
    }
}
   //// Asking from user if they want to encrypt or decrypt
    printf("Encryption (E) or Decryption (D)?: ");
    scanf(" %c", &choice); 

    // gettig user message
    printf("Enter your message: ");
    getchar();
    fgets(msg, sizeof(msg), stdin);
    msg[strcspn(msg, "\n")] = '\0';

    //Asking the shift key
    printf("Enter shift key: ");
    scanf("%d", &key);

 // do loop for encrypt or decrypt
    for (int i = 0; msg[i] != '\0'; i++) {
        char ch = msg[i];

        //user chose encryption
        if (choice == 'E' || choice == 'e') {  
            output[i] = encryptChar(ch, key, queue);}

            // Initialize letter of key
int findIndex(char ch, char queue[]) {
    for (int i = 0; i < SIZE; i++) {
        if (queue[i] == ch)
            return i;
    }
    return -1;  // not found
}

// Shift letters for encryption (forward)
char encryptChar(char ch, int key, char queue[]) {
    if (isalpha(ch)) {                        //only shift letters
        char upper = toupper(ch);             // convert to uppercase
        int index = findIndex(upper, queue);  // get position A-Z
        int newIndex = (index + key) % SIZE;
        if (newIndex < 0)
            newIndex += SIZE;
        char encrypted = queue[newIndex];
        return isupper(ch) ? encrypted : tolower(encrypted);
    }
    return ch; 
}
