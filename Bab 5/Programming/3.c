//Programming BAB 5.3
/*Perintah : Buatlah program kalkulator sederhana yang meminta 2 buah 
 * 			 nilai dan sebuah operator, kemudian tampilkan hasilnya
 * 	 	 	 ke layar. Operator yang dapat dipakai adalah +, -, *, dan /
 */

#include <stdio.h>

void main()
{
	float a, b, c;
	char q, w, e, r, t;
	
	q = '+';
	w = '-';
	e = '*';
	r = '/';
	
	printf("Kalkulator Sederhana\n Masukkan Input :\n");
	scanf("%f %c %f", &a, &t, &b);
	if(t == q)
	{
		c = a + b;
		printf("Hasil = %.2f\n", c);
	}
	else if(t == w)
	{
		c = a - b;
		printf("Hasil = %.2f\n", c);
	}
	else if(t == e)
	{
		c = a * b;
		printf("Hasil = %.2f\n", c);
	}
	else if (t == r)
	{
		if (a > 0 && b > 0)
		{
			c = a / b;
			printf("Hasil = %.2f\n", c);
		}
		else
			printf("Semua bilangan tidak dapat dibagi dengan 0\n");
	}
	else
	 printf("tidak ada operator '%c'\n");
}
