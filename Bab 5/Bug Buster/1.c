//Bub Buster Bab 5.1
/* Perintah : carilah kesalahan-kesalahan yang terdapat dalam potongan
 * 			  kode program di bawah ini.*/

#include <stdio.h>

void main()
{
	int bil1, bil2, bil3;
	
	scanf("%d %d %d", &bil1, &bil2, &bil3);
	
	if (bil1 >=1)
	{
		bil2 = bil1 * 2;
		bil3 = bil2 / bil1;
		printf("%d < Bil2 %d < Bil3\n", bil2, bil3);
	}
	
	else if(bil2 < 0)
	{
		bil2++;
		bil3++;
		printf("%d < Bil2 %d < Bil3\n", bil2, bil3);
	}
	else if(bil3 < 10)
	{
		bil3 = bil2 + 1;
		bil2 = bil3 - 2;
		printf("%d < Bil3 %d < Bil2", bil3, bil2);
	}
	else
		bil3 = 0;
}
