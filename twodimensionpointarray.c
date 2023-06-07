#include <stdio.h>
void main() {
    char A[]="ARRAY";
    char *p="POINTER";
    int i;

    for(i=0; i<5; i++) {
        printf("*(A+%d): %c\n", i, *(A+i)); // 배열을 포인터 형식으로 참조
    }

    for(i=0; i<7; i++) {
        printf("*p[%d]: %c\n", i, p[i]); // 포인터를 배열 형식으로 참조
    }

    char twoD[2][3] = {{'a', 'b', 'c'}, {'d', 'e', 'f'}};

    for(i=0; i<2; i++) {
        for(int j=0; j<3; j++) {
            printf("twoD[%d][%d]: %c\n", i, j, twoD[i][j]); // 포인터를 배열 형식으로 참조
        }
    }
}