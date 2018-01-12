#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) 
{
	char kullanici_adi[10]= "gnctrkcll";
	char sifre[10] = "turkcell";
	char k_adi[10],sfr[10];
git:system("cls");
	printf("Lutfen kullanici adini giriniz = "); scanf("%s",&k_adi);
	printf("Lutfen sifreyi giriniz = "); scanf("%s",&sfr);
	
	if(!strncmp(k_adi,kullanici_adi,10) && !strncmp(sifre,sfr,10))
	{
		printf("Giris onaylandi.\n");
	}
	else 
	{
		printf("Kullanici adi veya sifreyi yanlis girdiniz.\n");
		system("pause");
		goto git;
	}
system("pause");
}
