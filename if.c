#include <stdio.h>

#define RED_ANSI "\x1b[31m"
#define BLUE_ANSI "\x1b[34m"
#define YELLOW_ANSI "\x1b[33m"
#define GREEN_ANSI "\x1b[32m"
#define RESET_ANSI "\x1b[0m"

int main() {
    int red = 1;
    int blue = 2;
    int yellow = 3;
    int green = 4;

    if(red > 0) {
        printf("%sred: %d%s\n", RED_ANSI, red, RESET_ANSI);
    }

    if(blue > 0) {
        printf("%sblue: %d%s\n", BLUE_ANSI, blue, RESET_ANSI);
    }

    if(yellow > 0) {
        printf("%syellow: %d%s\n", YELLOW_ANSI, yellow, RESET_ANSI);
    }

    if(green > 0) {
        printf("%sgreen: %d%s\n", GREEN_ANSI, green, RESET_ANSI);
    }
}