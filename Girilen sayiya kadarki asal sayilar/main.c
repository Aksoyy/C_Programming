#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) 
{
	int b ;
	printf("Araligin son degeri giriniz :"); scanf("%d",&b);
	asal(b);
	printf("\n");
	system("pause");
}

void asal(int a)
{
	int i,j;
	bool  sonuc;
	for	(i=2;i<=a;i++)
	{
		sonuc=true;
		for (j=2;j<i;j++)
		{
			if (i%j==0)
			{
				sonuc=false;
				break;
			}
		}
		if (sonuc==true)
		{
			printf("Asal sayilar = %d\n",i);
		}
	}
}
