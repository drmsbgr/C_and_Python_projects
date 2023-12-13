#include <stdio.h>

struct Urun
{
    int urunNo;
    char urunAdi[50];
    int birimFiyat;
    int urunAdedi;
};

int sepetUrunAdet;
struct Urun urunler[5];

#define MAX_URUN 2
struct Urun sepetim[MAX_URUN];

void UrunEkle(struct Urun yeniUrun)
{
    if (sepetUrunAdet == MAX_URUN)
        return;

    sepetim[sepetUrunAdet] = yeniUrun;
}

void UrunSil(int no)
{
    for (int i = 0; i < sepetUrunAdet; i++)
    {
        if (sepetim[i].urunNo == no)
        {
            struct Urun bos;
            sepetim[i] = bos;
            break;
        }
    }
    sepetUrunAdet--;
}

int main()
{
    urunler[0].urunNo = 101;
    urunler[0].urunAdi = "Çakmak";
    urunler[0].urunAdedi = 6;
    urunler[0].birimFiyat = 10;
    return 0;
}