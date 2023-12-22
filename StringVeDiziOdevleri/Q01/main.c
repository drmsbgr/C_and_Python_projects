#include <stdio.h>
#include <string.h>

int main()
{
    char dizgi[50];
    char hedefKarakter = ' ';

    printf("Bir dizgi girin\n->");
    fgets(dizgi, sizeof(dizgi), stdin);
    printf("Aranacak karakteri girin\n->");
    scanf("%c", &hedefKarakter);

    int sayac = 0;

    for (int i = 0; i < strlen(dizgi); i++)
    {
        if (dizgi[i] == hedefKarakter)
            sayac++;
    }

    printf("Cumlede gecen '%c' karakteri sayisi: %d", hedefKarakter, sayac);

    return 0;
}