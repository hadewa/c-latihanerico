//Bug Buster Bab 5.2
//Perintah : (Sama dengan pertama)

#include <stdio.h>

void main()
{
	int bil;
	
	scanf("%d", &bil);
	
	if(bil % 2 == 0)
	{
		bil = bil +2;
		printf("%d << Bil", bil);
	}
	else
	{
		bil = bil +2;
		printf("%d << Bil", bil);
	}
		
	switch(bil - 2)
	{
		case 1: bil = printf("%d", bil * 1);
		case 2: bil = printf("%d", bil * 2);
		case 3: bil = printf("%d", bil * 3);
		default: bil = bil * 0;
	}
}
