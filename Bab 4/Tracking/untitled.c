//Tracking Bab 4
/*Soal : Tentukanlah apa yang ditampilkan ke layar oleh kode program 
 * 		 dibawah ini jika input yang diberikkan adalah 2 dan 3*/

#include <stdio.h>

void main()
{
	int a, b;
	
	scanf("%d %d", &a, &b);
	
	a = a + b;
	b = b + a;
	
	printf("%d %d", a, b);
}
