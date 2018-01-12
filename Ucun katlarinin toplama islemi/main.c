#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) 
{
	int sayi;
git:	
	system("cls");
	printf("Lutfen ucun kati icin sayiyi giriniz = "); scanf("%d",&sayi);
	
	if(0<sayi && sayi<101)
	{	
		int x,topla=0;
		for(x=0;x<=sayi;x+=3)
		{
			topla=topla+x;	
		}
	printf("Sonuc = %d\n",topla);
	system("pause");
	}
	
	else 
	{
		if(sayi<=0)
		{
			printf("Lutfen daha buyuk bir sayi giriniz.\n");
			system("pause");
		}
		else
		{
			printf("Lutfen daha kucuk bir sayi giriniz\n");
			system("pause");
		}
	goto git;
	}
}
