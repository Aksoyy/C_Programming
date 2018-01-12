#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int orta[10],a,b,degisken;
	
	for(a=1;a<=9;a++)
	{
		printf("Lutfen %d sayiyi giriniz = ",a);
		scanf("%d",&orta[a]);
	}
		
		for(a=1;a<=9;a++)
		{
			for(b=1;b<=9;b++)
			{
				degisken=0;
				if(orta[a] <= orta[b])
				{
					degisken = orta[a];
					orta[a] = orta[b];
					orta[b] = degisken;
				}
			}
		}
	
	printf("Siralamada ortada bulunan sayi = %d \n",orta[5]);
	system("pause");
	return 0;
}
