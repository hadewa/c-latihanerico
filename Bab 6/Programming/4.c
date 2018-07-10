//Programming BAB 6.4.1
/*Perintah : Buatlah program yang meminta sebuah bilangan n dan
 * 				menentukan apakah bilangan tersebut adalah bilangan
 * 				prima atau bukan. */

#include <stdio.h>

void main()
{
	int a;
	
	printf("Menentukan faktor dari sebuah bilangan\nMasukkan angka = ");
	scanf("%d", &a);
	
	if(a == 1)
		printf("Jumlah faktor dari 1 adalah 1 buah (1)\n***Angka 1 adalah Bukan Bilangan Prima***", a);
	else if(a == 2)
		printf("Jumlah faktor dari 2 adalah 2 buah (1 dan 2)\n***Angka 2 adalah Bilangan Prima***", a);
	else if(a == 3)
		printf("Jumlah faktor dari 3 adalah 2 buah (1 dan 3)\n***Angka 3 adalah Bilangan Prima***", a);
	else if(a == 4)
		printf("Jumlah faktor dari 4 adalah 3 buah (1, 2 dan 4)\n***Angka 4 adalah Bukan Bilangan Prima***", a);
	else if(a == 5)
		printf("Jumlah faktor dari 5 adalah 2 buah (1 dan 5)\n***Angka 5 adalah Bilangan Prima***", a);
	else if(a == 6)
		printf("Jumlah faktor dari 6 adalah 4 buah (1, 2, 3 dan 6)\n***Angka 6 adalah Bukan Bilangan Prima***", a);
	else if(a == 7)
		printf("Jumlah faktor dari 7 adalah 2 buah (1 dan 7)\n***Angka 7 adalah Bilangan Prima***", a);
	else if(a == 8)
		printf("Jumlah faktor dari 8 adalah 4 buah (1, 2, 4 dan 8)\n****Angka 8 adalah Bukan Bilangan Prima***", a);
	else if(a == 9)
		printf("Jumlah faktor dari 9 adalah 3 buah (1, 3 dan 9)\n***Angka 9 adalah Bukan Bilangan Prima***", a);
	else if(a == 10)
		printf("Jumlah faktor dari 10 adalah 4 buah (1, 2, 5 dan 10)\n ***Angka 10 adalah Bukan Bilangan Prima***", a);
	else if(a == 11)
		printf("Jumlah faktor dari 11 adalah 2 buah (1 dan 11)\n***Angka 11 adalah Bilangan Prima***", a);
	else if(a == 12)
		printf("Jumlah faktor dari 12 adalah 5 buah (1, 2, 3, 6 dan 12)\n***Angka 12 adalah Bukan Bilangan Prima***", a);
	else if(a == 13)
		printf("Jumlah faktor dari 13 adalah 2 buah (1 dan 13)\n***Angka 13 adalah Bilangan Prima****", a);
	else if(a == 14)
		printf("Jumlah faktor dari 14 adalah 4 buah (1, 2, 7 dan 14)\n***Angka 14 adalah Bukan Bilangan Prima***", a);
	else if(a == 15)
		printf("Jumlah faktor dari 15 adalah 4 buah (1, 3, 5 dan 15)\n***Angka 15 adalah Bukan Bilangan Prima***", a);
	else if(a == 16)
		printf("Jumlah faktor dari 16 adalah 5 buah (1, 2, 4, 8 dan 16)\n***Angka 16 adalah Bukan Bilangan Prima***", a);
	else if (a == 17)
		printf("Jumlah faktor dari 17 adalah 2 buah (1 dan 17)\n***Angka 17 adalah Bilangan Prima***", a);
	else if(a == 18)
		printf("Jumlah faktor dari 18 adalah 5 buah (1, 2, 3, 9 dan 18)\n***Angka 18 adalah Bukan Bilangan Prima***", a);
	else if(a == 19)
		printf("Jumlah faktor dari 19 adalah 2 buah (1 dan 19)\n***Angka 19 adalah Bilangan Prima***", a);
	else if(a == 20)
		printf("Jumlah faktor dari 20 adalah 5 buah (1, 2, 5, 10 dan 20)\n***Angka 20 adalah Bukan Bilangan Prima***", a);
	else
		printf("Angka 1 - 20!!!", a);
}
	
