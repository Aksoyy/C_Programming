#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	char tercih;

git: system("cls");	
	printf("Asagidakilerden hangisi Bilgisayar Muhendisligi Bolumu birinci sinif derslerinden biri degildir?\n");
	printf("a-) Bilgisayar Muhendisligine giris  \t  b-) Programlamaya Giris \n");
	printf("c-) Turk Dili-I  \t  d-) Matematik-I  \t  e-) Sayisal Tasarim \n");

	printf("Lutfen tercihinizi yapin. = "); scanf("%c",&tercih);
	
	switch (tercih)
	{
		case 'A':  
		case 'a': 
		case 'B': 
		case 'b': 
		case 'C': 
		case 'c': 
		case 'D': 
		case 'd': printf("Malesef, tercihiniz yanlis \n"); break;
		case 'E': 
		case 'e': printf("Tebrikler, dogru cevap. \n"); break;
		default:	printf("Lutfen dogru tercih yapiniz.\n"); 
		goto git;
	}
	system("pause");
	return 0;
}
