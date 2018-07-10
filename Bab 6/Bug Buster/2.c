//Bug Buster BAB 6.2

#include <stdio.h>

void main()
{
	int bil;
	
	printf("Masukkan Nilai Negatif!\nMasukkan Nilai = ");
	scanf("%dd", &bil);
	
	while(bil >= 0)
	{
		printf("Masukkan Nilai = ");
		scanf("%d", &bil);
	}
	if (bil % 2 == 0)
		printf("Negatid Genap\n");
	else
		printf("Negatif Ganjil\n");
}
