//Tracking Bab 4.2
/*Soal : Tentukanlah apa yang ditampilkan ke layar oleh kode
 * 		 program dibawah ini jika yang diberikan adalah 2 dan 3 */

#include <stdio.h>

void main()
{
	int a, b, c;
	scanf("%d %d", &a, &b);
	c = a++;
	a = --b;
	b = c++;
	
	printf("%d %d %d", a, b, c);
}
