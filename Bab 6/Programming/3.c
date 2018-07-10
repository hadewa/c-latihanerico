//Programming BAB 6.3
/*Perintah : Buatlah program yang meminta sebuah bilangan n, lalu
 * 				menampilkan seluruh bilangan ganjil dari 1 - n.*/

#include <stdio.h>

void main()
{
	int a, b;
	
	scanf("%d", &a);
	
	for(b = 0; b <= a; b++)
	{
		if(b % 2 == 0)
			printf(" ", b);
		else
			printf("%d", b);
	}
}
