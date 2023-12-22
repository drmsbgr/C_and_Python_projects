#include <stdio.h>
#include <string.h>

int main()
{
	char str[] = "Samsun Universitesi";
	int uzunluk = strlen(str);

	printf("Tersten yazdirilmis string : ");

	for (int i = uzunluk - 1; i >= 0; i--)
	{
		printf("%c", str[i]);
	}
	
	printf("\n");
	return 0;
}