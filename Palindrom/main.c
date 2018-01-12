#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int sayi,basamak,son,ilk,yedek,degisken,kontrol=1;
	
	printf("Lutfen sayiyi giriniz = "); scanf("%d",&sayi);
	
	yedek = sayi;
	while ( sayi > 0)
	{
		basamak++;
		sayi /= 10;
	}
	
	while ( yedek > 0 )
	{
		son =  yedek%10;
		ilk = yedek / pow(10,(double)basamak-1);
		
		if( ilk == son)
		{
			
			degisken = pow(10,(double)basamak-1);
			yedek = yedek % degisken;
			yedek = yedek/10;
			basamak -= 2;
			kontrol = 1;
		}
		else
		{
			kontrol = 0;
			break;
		}

	}
	
	if(kontrol==1)
	{
		printf("Girilen sayi polindromdur. \n");
	}
	else 
	{
		printf("Girilen sayi polindrom degildir. \n");
	}
	
	system("pause");
	return 0;
}
