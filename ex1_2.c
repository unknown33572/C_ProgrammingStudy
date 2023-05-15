#include <stdio.h>
#pragma warning(disable:4996)

int a, b, c; //전역변수 선언
int product(int x, int y); //함수 원형 선언
void main() { //main 함수 정의
    printf("Enter a number between 1 and 100: "); //첫 번째 정수 입력
    scanf("%d", &a);
    printf("Enter a another number between 1 and 100: "); //두 번째 정수 입력
    scanf("%d", &b);
    c = product(a, b); //첫 번째 정수와 두 번째 정수를 c에 저장
    printf("%d * %d = %d \n", a, b, c); //곱셈 결과 출력
}
//두 수의 곱을 계산하고 리턴하는 함수
int product(int x, int y) {
    return (x * y);
}