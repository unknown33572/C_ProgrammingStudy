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

    char *PA[4];

    PA[0] = "first";
    PA[1] = "second";
    PA[2] = "third";
    PA[3] = "fourth";

    for (int i = 0; i < 4; i++) {
        printf("%s\n", PA[i]);
    }

    printf("%s\n", PA[0]+4); // PA[0]의 주소값에 4를 더한 주소값을 가르킴
    

    int c[] = {1, 2, 3, 4, 5};
    int d[] = {6, 7, 8, 9, 10};
    int *pa[2];
    pa[0] = c;
    pa[1] = d;

    printf("*(pa[0]) = %d\n", *(pa[0])); 
    printf("*(pa[0]+1) = %d\n", *(pa[0]+1)); // pa[0]의 주소값에 1을 더한 주소값을 가르킴
    printf("*(pa[1]) = %d\n", *(pa[1])); 
    printf("*(pa[1]+1) = %d\n", *(pa[1]+1)); // pa[1]의 주소값에 1을 더한 주소값을 가르킴
}