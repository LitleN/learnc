#include <stdio.h>
#include <string.h>

int main()
{
    int str, space, tab, finish;
    finish = 0;
    space = 0;
    tab = 0;

    printf("Введите текст, в котором хотите посчитать пробелы, знаки табуляции и символы конца строки. По окончании ввода нажмите +\n");
    while ((str = getchar()) != EOF){
        if(str == ' '){
            space++;
        } else if(str == '\t'){
            tab++;
        } else if(str == '\n'){
            finish++;
        } else if(str == '+'){
            break;
        }
    }
    printf("В строке %i пробелов, %i знаков табуляции, %i символов конца строки\n", space, tab, finish);
    return 0;
}