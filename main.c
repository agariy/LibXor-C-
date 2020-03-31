#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "xor_algo.h"


int main(){
    char buffer[100];
    char message[] = "Salutation";

    printf("Normal: %s\n", message);
    aXor(buffer, message);
    printf("Crypted : %s\n", buffer);
    dXor(buffer, buffer);
    printf("Decrypted: %s\n", buffer);
    aXor(buffer, buffer);
    printf("Decrypted: %s\n", buffer);
    return 0;
}