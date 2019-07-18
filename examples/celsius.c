#include <stdio.h>

int main()
{
    float celsius, fahr;
    int lower, upper, step;

    lower = -50;
    upper = 50;
    step = 5;

    printf("Таблица температур по Цельсию и Фаренгейту\n");
    printf("%3c\t%6c\n", 'C', 'F');

    celsius = lower;
    while (celsius <= upper) {
        fahr = 32.0 + ((9.0/5.0) * celsius);
        printf("%3.0f\t%6.2f\n", celsius, fahr);
        celsius = celsius + step;
    }

    return 0;
}