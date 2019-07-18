#include <stdio.h>

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("Таблица температур по Фаренгейту и Цельcию\n");
    printf("%3c\t%6c\n", 'f', 'c');

    fahr = lower;
    while(fahr <= upper){
        celsius = (5.0/9.0) * (fahr - 32.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }  

    return 0;
}