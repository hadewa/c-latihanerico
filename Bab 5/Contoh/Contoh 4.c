//Contoh Bab 5.4 
//Perintah : Buatlah contoh Switch

#include <stdio.h>

void main()
{
	int a;
	
	scanf("%d", &a);
	
	switch (a + 1)
	{
		case 1: printf("Nol");
		break;
		case 2: printf("Satu");
		break;
		case 3: printf("Dua");
		break;
		default:
			a = -1;
			printf("Min 1");
	}
}
