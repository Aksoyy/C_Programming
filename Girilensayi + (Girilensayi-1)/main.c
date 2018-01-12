#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int sayi,a=0,b=1,sonuc,gecici;
	
	printf("Lutfen sayi giriniz = "); scanf("%d",&sayi);
	
	while(b<sayi)
	{	
		system("cls");
		gecici = b;
		a = gecici;
		b = b+1;
		sonuc = a+b;
		printf("Islem sonucu = %d\n",sonuc);
	}
	system("pause");
	return 0;
}
