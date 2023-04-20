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
    } else if (red == 0)
    {
        printf("red: %d\n%s\n", red, "red is 0");
    }
    
    if(blue > 0) {
        printf("%sblue: %d%s\n", BLUE_ANSI, blue, RESET_ANSI);
    } else if (blue == 0)
    {
        printf("blue: %d\n%s\n", blue, "blue is 0");
    }

    if(yellow > 0) {
        printf("%syellow: %d%s\n", YELLOW_ANSI, yellow, RESET_ANSI);
    } else if (yellow == 0)
    {
        printf("yellow: %d\n%s\n", yellow, "yellow is 0");
    }

    if(green > 0) {
        printf("%sgreen: %d%s\n", GREEN_ANSI, green, RESET_ANSI);
    } else if (green == 0)
    {
        printf("green: %d\n%s\n", green, "green is 0");
    }
}