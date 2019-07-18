#include <stdio.h>

int main()
{
    float fahr;

    #define LOWER 0
    #define UPPER 300
    #define STEP 20

    printf("Таблица температур по Фаренгейту и Цельсию");
    printf("%3c\t%6c\n", 'F', 'C');

    for(fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP) {
        printf("%3.0f\t%6.1f\n", fahr, (5.0/9.0) * (fahr -32));
    }
    
    return 0;
}