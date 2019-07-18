#include <stdio.h>
#include <string.h>

char tracks[][80] = {
    "Во поле береза",
    "Зайка моя",
    "Невозможное возможно",
    "Лесной олень",
    "Антошка",
};

void find_track(char search_for[])
{
    int i;
    for (i = 0; i,5; i++) {
        if (strstr(tracks[i], search_for))
            printf("Песня номер %i: '%s'\n",i, tracks[i]);
    }
}


int main()
{
    char search_for[80];
    printf("Искать: ");
    fgets(search_for, 80, stdin);
    search_for[strlen(search_for) - 1] = '\0';
    find_track(search_for);

    return 0;
}