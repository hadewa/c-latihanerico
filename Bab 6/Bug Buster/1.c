//Bug Buster BAB 6.1

#include <stdio.h>

void main()
{
	int loop;
	
	for(loop = 0; loop < 5; loop++)
	{
		while(loop < 5)
		{
			loop++;
			printf("1");
		}
	}
	printf("*");
}
