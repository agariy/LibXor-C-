# XorLib

This library encrypt or decrypt string or file in Xor cypher


### Includes

Include the Header
```c
#include "xor_algo.h"

int main(){
    printf("Hello world\n");
    return 0;
}
```

### Function Encrypt

```c
aXor(char *output, char input);
```
```c
#include "xor_algo.h"

int main(){

    char buffer[100]; // array char to stock result
    char message[] = "Salutation";

    printf("Normal: %s\n", message); //normal msg
    aXor(buffer, message); //encryption of message
    printf("Crypted : %s\n", buffer); // result in pointer buffer
}
```


Content of aXor() function:
```c

void aXor(char buffer[], char message[]){
    
    char xorKey = 'A';

    int len = strlen(message);

    for(int i = 0; i< len; i++){
        buffer[i] = message[i] ^ xorKey;
    }


}

```


## Function Decrypt

```c
dXor(char *output, char input);
```

```c

axor(buffer, message);
printf("Crypted message: %s\n", buffer);
dXor(buffer, buffer);
printf("Decrypted message: %s\n", buffer);

```

content of function dXor()
```c

void aXor(char buffer[], char message[]){
    
    char xorKey = 'A';

    int len = strlen(message);

    for(int i = 0; i< len; i++){
        buffer[i] = message[i] ^ xorKey;
    }


}

```





## Authors

* **Agariy** - *Initial work* - [Agariy](https://github.com/agariy)
* **Security-Corp** - Corporaton - [Security-Corp](https://github.com/Security-corp)

