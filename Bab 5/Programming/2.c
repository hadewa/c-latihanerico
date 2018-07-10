//Programming BAB 5.2
/*Perintah : Buatlah program untuk menentukan apakah tahun yang
 * 			 dimasukkan adalah tahun kabisat atau bukan. Tahun kabisat
 * 		 	 adalah tahun yang habis dibagi 4, tetapi tidak habis dibagi
 * 			 100 kecuali kelipatan 400.*/

#include <stdio.h>

void main()
{
	int a;
	
	printf("Menentukan Tahun kebisat\nMasukkan Tahun = ");
	scanf("%d", &a);
	
	if(a%16==0)
		printf("Tahun Kabisat\n");
	else
		printf("Bukan Tahun Kabisat\n");
}
