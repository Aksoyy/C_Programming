#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int sayi;
	int tahmin_sayisi;
	tahmin_sayisi=57;
git:
	system("cls");
	printf("Tahmin icin sayiyi giriniz = ");	scanf("%d",&sayi);
	if(sayi>0 && sayi<101)
	{
		if(sayi==tahmin_sayisi)
		{
			printf("Bildiniz.\n");
		}
		
		else 
		{
			if(sayi > tahmin_sayisi)
			{
				printf("Lutfen daha kucuk bir sayi giriniz.\n");
			}
			
			else 
			{
				printf("Lutfen daha buyuk bir sayi giriniz.\n");
			}
			system("pause");
			goto git;
		}
	}
	
	else 
	{
		printf("Lutfen 1 ile 100 arasinda sayi giriniz\n");	
		system("pause");
		goto git;
	}
	return 0;
}
