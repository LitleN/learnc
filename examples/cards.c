#include <stdio.h>
#include <stdlib.h>

int main()
{
    char card_name[3];
    int counter = 0;
    while (card_name[0] != 'X') {
        int val = 0;
        puts("Введите название карты: ");
        scanf("%2s", card_name);
        switch (card_name[0]) {  
            case 'K':
            case 'Q':
            case 'J':
                val = 10;
                break;
            case 'A':
                val = 11;
                break;
            case 'X':
                puts("Игра закончена!");
                continue;
            default:
                val = atoi(card_name);
                if ((val<1) || (val>10)) {
                    puts("Нет такой карты!");
                    continue;
                }    
            }
        if ((val>2) && (val<7)) {
            puts("Счетчик увеличился");
            counter++;
        } else if (val == 10) {
            puts("Счетчик уменьшился");
            counter--;
        }
        printf ("Итоговый счет: %i \n", counter);
    }
    return 0;
}