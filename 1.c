#include <stdio.h>

int main()
{
    char name[255];
    char major[255];
    char id[255];
    
    printf("이름을 공백없이 영문으로 입력하시오. (예: Honggildong) : ");
    scanf("%s", name);
    
    printf("학과를 공백없이 영문으로 입력하시오. (예: ComputerScience) : ");
    scanf("%s", major);
    
    printf("학번을 입력하시오. (예: 202334-123456) : ");
    scanf("%s", id);
    
    printf("======= 처리 결과 =======\n");
    printf("이름 홀수번째 문자만 순방향 출력 : ");
    int i = 0;
    while (i < 255 && name[i]) {
        printf("%c", name[i]);
        i += 2;
    }
    printf("\n");
    
    printf("학과 짝수번째 문자만 역방향 출력 : ");
    i = 0;
    while (major[i]) {
        i++;
    }
    if (i % 2 == 0) {
        i--;
    } else {
        i -= 2;
    }
    while (i >= 0) {
        printf("%c", major[i]);
        i -= 2;
    }
    printf("\n");
    
    printf("학번 홀수번째 문자 * 로 출력 : ");
    i = 0;
    while (i < 255 && id[i]) {
        if (i % 2) {
            printf("%c", id[i]);
        } else {
            printf("*");
        }
        i++;
    }
    printf("\n");
    printf("--------------------------------");
    
    return (0);
}
