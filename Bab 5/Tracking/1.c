//Tracking BAB 5.1
/*Perintah : Tentukanlah apa yang ditampilkan ke layar oleh kode program
 * 			 di bawah ini jika input yang diberikan adalah 2 dan 3.*/

#include <stdio.h>

void main()
{
	int bil;
	
	scanf("%d", &bil);
	if(bil % 2 == 0)
		bil = bil + 1;
	printf("%d", bil);
}
