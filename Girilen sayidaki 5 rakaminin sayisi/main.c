#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int sayi,artma,yedek,kontrol,sayma=0;
 	printf("Lutfen Sayi Giriniz: "); scanf("%d", &sayi);

	yedek = sayi;
	for (artma=1;artma<=yedek;artma*=10)
	{
		kontrol=sayi%10;
		if(kontrol==5)
		{
			sayma++;
		}
		sayi=sayi/10;
	}
	
	if(sayma==0)
	{
		printf("Girilen sayida 5 rakami yoktur.\n");
	}
	else
	{
		printf("Girilen sayida %d tane 5 rakami vardir.\n",sayma);
	}

	system("pause");
	return 0;
}
