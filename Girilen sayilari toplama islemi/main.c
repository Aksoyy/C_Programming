#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int topla[5],tur,toplam=0;
	
	for(tur=1;tur<=5;tur++)
	{
		printf( "Girilen %d. sayi = ",tur);
		scanf( "%d", &topla[tur]);
		toplam += topla[tur];			
	}
	
	printf("Girilen sayilarin toplami = %d\n",toplam); system("pause");
	return 0;
}
