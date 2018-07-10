 //Programming BAB 5.1
/*Perintah : Buatlah program yang meminta sebuah bilanghan dan
 * 			 menentukan apakah bilangan tersebut adalah bilangan ganjil
 * 			 atau genap.*/

#include <stdio.h>

void main()
{
	int a;
	
	scanf("%d", &a);
	
	if(a % 2 == 0)
		printf("Genap\n");
	else
		printf("Ganjil\n");
}
