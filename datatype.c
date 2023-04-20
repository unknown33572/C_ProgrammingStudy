#include <stdio.h>

// char: 1byte
// short: 2byte
// int: 4byte
// long int: 8byte
// float: 4byte
// double: 8byte

int main() {
    printf("char size: %ld\n", sizeof(char));
    printf("short size: %ld\n", sizeof(short));
    printf("int size: %ld\n", sizeof(int));
    printf("long int: %ld\n", sizeof(long));
    printf("float size: %ld\n", sizeof(float));
    printf("double size: %ld\n", sizeof(double));
    return 0;
}