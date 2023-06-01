#include <stdio.h>

void main() {
    int a[10], *p, *q;

    for(int i = 0; i < 10; i++) {
        a[i] = i;
    }

    p = &a[0];
    q = &a[0];

    printf("*p == %d\n", *p);
    printf("*p == %d\n", *++p);
    p = p + 2;
    printf("*p == %d\n", *p); // 배열 a의 3번째 요소의 포인터를 가르키고 있음
/*
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0)
        {
            *p = a[i];
            p++;
        }
        printf("%d ", a[i]);
    }


    for (int i = 0; i < 10; i++) {
        if (i % 2 == 1)
        {
            *q = a[i];
            q++;
        }
        printf("%d ", a[i]);
    }
*/


}