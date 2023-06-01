#include <stdio.h>

void main() {
    static int arr[3][3] = {{90,90,90}, {80,80,80}, {70,70,70}};

    int sum, x, y;
    for (x = 0; x < 3; x++) {
        sum = 0;
        for (y = 0; y < 3; y++) {
            sum += arr[x][y];
        }
        printf("%d번째 학생의 총점은 %d점입니다.\n", x + 1, sum);
    }
}