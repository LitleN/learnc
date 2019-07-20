#include <stdio.h>
#include <string.h>

int main()
{
    int sim, space;

    while((sim = getchar()) != EOF){
        if(sim == ' '){
            space++;
        }else{
            space = 0;
        }
        if(space == 2){
            space--;
            putchar('\b');
        }
        putchar(sim);
    }

    return 0;
}