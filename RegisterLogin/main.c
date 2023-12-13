#include <stdio.h>
#include <string.h>

int main()
{
    printf("İslem secin: (1:Giris yap, 2:Kayit ol)\n->");

    int op;

    scanf("%d", &op);

    char kadi[32];
    char sifre[32];

    printf("Kullanici adini girin: ");
    scanf("%s",&kadi);

    printf("Sifreyi girin: ");
    scanf("%s",&sifre);

    FILE *fptr;

    if (op == 1)
    {
        fptr = fopen("data.txt", "r");
        char text[128];
        fgets(text,128,fptr);

        char * token = strtok(text,",");        

        int state = 0;

        if (strcmp(token,kadi) == 0)
        {
            state++;
            printf("Kullanici adi dogru\n");
        }

        token = strtok(NULL, ",");
        
        if (strcmp(token,sifre) == 0)
        {
            state++;
            printf("Sifre dogru\n");
        } 

        if (state == 2)
        {
            printf("Giris islemi basarili!");    
        }
        else
        {
            printf("Giris islemi basarisiz!");
        }

        fclose(fptr);
    }
    else
    {
        fptr = fopen("data.txt","w");

        char dataToWrite[128];

        strcpy(dataToWrite, kadi);
        strcat(dataToWrite,",");
        strcat(dataToWrite, sifre);

        fprintf(fptr, dataToWrite);

        fclose(fptr);
    }
}