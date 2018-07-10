#include <stdio.h>

void main()
{
	float a, b, c;
	char q, w, e, r, t;
	
	q = '+';
	w = '-';
	e = '/';
	r = '*';
	
	printf("                             Program Kalkulator\n");
	scanf("%f %c %f", &a, &t, &b);
	
	if (t == q)
	{
		c = a+b;
		printf("Hasil = %.2f\n", c);
	}
	else if (t == w)
	{
		c = a-b;
		printf("Hasil = %.2f\n", c);
	}
	else if (t == e)
	{
		while (b ==0)
		{
			printf("Semua bilangan tidak dapat dibagi dengan 0\nMasukkan Input lagi\n=");
			scanf("%f %c %f", &a, &t, &b);
		}
			c = a/b;
			printf("Hasil = %.2f\n", c);
	}
	else if (t == r)
	{
		c = a*b;
		printf("Hasil = %.2f\n", c);
	}
	else
	{
		printf("Tidak ada operator %c");
	}
}
