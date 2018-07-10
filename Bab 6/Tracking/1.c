//Tracking BAB 6.1

#include <stdio.h>

void main()
{
	int bil;
	
	for(bil = 0; bil < 10; bil = bil + 2);
	{
		if(bil % 3 == 0)
			printf("Hoi");
		else
			printf("Hui");
	}
}
