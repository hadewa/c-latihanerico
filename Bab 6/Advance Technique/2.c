//Advance Technique BAB 6.2

#include <stdio.h>

void main()
{
	int baris, kolom;
	
	for( baris = 0; baris < 5; baris++)
	{
		for( kolom = 0; kolom <= baris; kolom++)
		{
			printf("*");
		}
		printf("\n");
	}
}
