//Tracking BAB 6.2

#include <stdio.h>

void main()
{
	int x, y, z;
	
	z = 5;
	for(x = 0; x < 10; x = x + 2)
	{
		for(y = 0; y < x; y = y + 2)
			printf("Hai");
		while(y > 0)
		{
			z++;
			y++;
		}
	}
	printf("%d", z);
}

