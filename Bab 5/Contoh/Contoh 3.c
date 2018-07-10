//Contoh Bab 5.3
//Perintah : Membuat contoh program If Netsted (If Bersarang)

#include<stdio.h>

void main()
{
	int a;
	scanf("%d", &a);
	if (a > 0)
	{
		printf("Bilangan Positif\n");
		if (a % 7 == 0)
		{
			printf("Kelipatan Tujuh");
		}
		else
		{
			printf("Bukan Kelipatan Ketujuh");
		}
	}
	else
	{
		printf("%d Adalah bilangan Nol atau Negatif", a);
	}
}
