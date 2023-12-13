#include <stdio.h>

int main()
{
    for (int i = 1; i <= 20; i++)
    {
        int kalan = i % 5;
        if (kalan == 0)
            printf("%d, 5 ile bolunebilir.\n",i);
        else
            printf("%d, 5 ile bolunemez.(Kalan=%d)\n",i,kalan);        
    }
    
}