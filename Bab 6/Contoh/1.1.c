//Contoh BAB 6.1 "For"

#include <stdio.h>

void main()
{
	int a;
	
	printf("Masukkan Input = ");
	scanf("%d", &a);
	
	for(a; a <= 1000; a = a + 1)
	{
		printf("Hadewa... %d%\n", a);
	}
}
