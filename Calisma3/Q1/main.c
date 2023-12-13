#include <stdio.h>

int main()
{
    int girdi = 0;
    do
    {
        printf("Haftalik calisma saatini giriniz(Cikis: -1)\n->");
        scanf("%d", &girdi);

        if (girdi == -1)
            break;

        int haftalikCalismaSaati = girdi;
        int saatBasiUcret = 0;
        printf("Calisanin saat basi ucretini giriniz\n->");
        scanf("%d", &saatBasiUcret);

        float haftalikMaas = 0;

        if (haftalikCalismaSaati > 40)
            haftalikMaas = 40 * saatBasiUcret + (haftalikCalismaSaati - 40) * saatBasiUcret * 1.5;
        else
            haftalikMaas = haftalikCalismaSaati * saatBasiUcret;

        printf("Haftalik Maas: %.2f\n\n", haftalikMaas);
    } while (girdi != -1);

    return 0;
}