//Contoh Bab 5.2 
//Perintah : Memperbaiki program hitung segitiga

#include<stdio.h>

void main()
{
	float a, b, c;
	
	printf("Masukkan nilai Alas   = ");
	scanf("%f", &a);
	printf("Masukkan nilai Tinggi = ");
	scanf("%f", &b);
	
	if (a <= 0 || b <= 0)
	{
		printf("Nilai input yang diberikkan haruslah Positif");
	}
	else
	{
		c = (a*b)/2;
		printf("Luas Segitiga = %.2f", c);
	}
}
