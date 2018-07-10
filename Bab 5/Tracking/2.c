//Tracking BAB 5.2
/*Perintah : Tentukanlah apa yang ditampilkan ke layar oleh kode
 * 			 program di bawah ini jika input yang diberikan adalah 
 * 			 2, 3, -2, dan -3.*/

#include <stdio.h>

void main()
{
	int bil;
	
	scanf("%d", &bil);
	
	if(bil%2 == 0)
		printf("genap\n");
	
	if(bil > 0)
		printf("Positif\n");
	if(bil%2!=0)
	{
		printf("ganjil\n");
		if(bil > 0)
			printf("positif\n");
		else
			printf("negatif\n");
	}
}
