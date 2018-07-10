//Contoh 6.3 Do While

#include <stdio.h>

void main()
{
	int number;
	
	scanf("%d", &number);
	
	do
	{
		printf("%d\n", number);
		number = number - 1;
	}
	while (number > 0);
}
