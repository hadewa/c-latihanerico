//Contoh 6.2 "While"

#include <stdio.h>

void main()
{
	int a;
	
	printf("Masukkan input kurang dari NOL\nMasukkan Input = ");
	scanf("%d", &a);
	
	while(a>0)
	{
		printf("Masukkan input NEGATIF Woy!!!\nMasukkan Input = ");
		scanf("%d", &a);
	}
	printf("Sip sip sip...\n");
}
