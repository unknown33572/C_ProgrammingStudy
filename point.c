#include <stdio.h>

void main() {
    int x, y; //변수 선언
    int *z; //포인터 선언

    x = 10; //변수 초기화

    z = &x; //포인터에 변수의 주소를 저장
    y = *z; //포인터에 저장된 주소로 접근하여 값을 가져옴

    *z = 20; //포인터에 저장된 주소로 접근하여 값을 변경

    printf("x의 값은 %d입니다.\n", x);
    printf("y의 값은 %d입니다.\n", y);
}