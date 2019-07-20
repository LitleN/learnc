#include <stdio.h>
#include <string.h>

int main(){

    int sim;

    printf("Введите строку, для завершения нажмите +\n");

    while((sim = getchar()) != EOF){
        if(sim == '\t'){
            putchar('\\');
            putchar('t'); 
        } else if(sim == '\b'){
            printf("\\b");
        } else if(sim == '\\'){
            putchar('\\');
            putchar('\\'); 
        } else if(sim == '+'){
            break;
        } else {
        putchar(sim);
        }
    }
    return 0;
}
    