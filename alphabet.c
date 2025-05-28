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
