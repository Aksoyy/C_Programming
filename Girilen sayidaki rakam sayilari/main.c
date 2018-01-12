#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int sayi,kalan,gecici,rakam,kopya;
 	printf("Lutfen Sayi Giriniz: "); scanf("%d", &sayi);
	
	for(rakam=0;rakam<=9;rakam++)
	{
		gecici=0;
		kopya=sayi;
		while ( sayi>0 )
		{
	 		kalan = sayi % 10;
			sayi=sayi/10; 
			if(kalan==rakam)
			{
				gecici += 1;
			}
		}
		printf("Girilen sayidaki %d sayisi = %d\n",rakam,gecici);
		sayi=kopya;	
	}
	system("pause");
	return 0;
}
