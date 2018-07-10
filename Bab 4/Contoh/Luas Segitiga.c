#include<stdio.h>

void main()
{
	float a, b, c;
	
	printf("Masukkan nilai Alas   = ");
	scanf("%f", &a);
	printf("Masukkan nilai Tinggi = ");
	scanf("%f", &b);
	c = (a*b)/2;
	printf("Hasil = %.2f\n", c);
}
