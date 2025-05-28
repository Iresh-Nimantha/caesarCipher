#ifndef CIRCULAR_QUEUE_H
#define CIRCULAR_QUEUE_H

#define SIZE 26  // totle number of alphabet

// Functions
void initQueue(char queue[]);
int findIndex(char ch, char queue[]);
char encryptChar(char ch, int key, char queue[]);
char decryptChar(char ch, int key, char queue[]);

#endif
