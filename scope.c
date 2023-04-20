#include <stdio.h>

int main() {
    int red = 1;
    printf("red: %d\n", red);

    red = 2;
    printf("red: %d\n", red);

    // 밖에 있는 red랑 다른 red임
    {
        int red = 3;
        printf("red: %d\n", red);
    }
    return 0;
}