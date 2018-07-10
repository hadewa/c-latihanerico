#include <stdio.h>
#include <stdlib.h>

void main()
{
	int bilangan;
	
	scanf("%d", &bilangan);
	
	if (bilangan<0)
	{
		printf("Negatif");
	}
	
	else if (bilangan>0)
	{
		printf("Positif");
	}
	
	else
	{
		printf("Nol");
	}
}
