#ifndef XOR_ALGO_H
#define XOR_ALGO_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void aXor(char buffer[], char message[]){
    
    char xorKey = 'A';

    int len = strlen(message);

    for(int i = 0; i< len; i++){
        buffer[i] = message[i] ^ xorKey;
    }


}

void dXor(char buffer[], char message[]){
    char xorKey = 'A';

    int len = strlen(message);

    for(int i = 0; i< len; i++){
        buffer[i] = message[i] ^ xorKey;
    }
}

#endif