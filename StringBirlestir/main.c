#include <stdio.h>
#include <string.h>

int main()
{
    char s1[50], s2[50];

    printf("birinci yaziyi gir\n->");
    scanf("%s", &s1);

    printf("ikinci yaziyi gir\n->");
    scanf("%s", &s2);

    strcat(s1, " ");
    strcat(s1, s2);

    printf("birlestirildi: %s", s1);

    return 0;
}