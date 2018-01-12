#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int tek_topla()
{
	int i,toplam=0,sayi2;
	printf("Tek sayilari toplama islemi icin sayiyi giriniz = "); scanf("%d",&sayi2);
	for(i=1;i<=sayi2;)
	{
		toplam = toplam + i;	
		i=i+2;
	}
	return toplam;	
}

int cift_topla()
{
	int i,toplam=0,sayi3;
	printf("Cift sayilari toplama islemi icin sayiyi giriniz = "); scanf("%d",&sayi3);
	for(i=0;i<=sayi3;)
	{
		toplam = toplam + i;
		i=i+2;	
	}
	return toplam;	
}

int toplam()
{
	int toplam=0,sayi4;
	printf("Toplama islemi icin sayiyi giriniz = "); scanf("%d",&sayi4);
	toplam = (sayi4 * (sayi4+1))/2;
	return toplam;
}

void main(int argc, char *argv[]) 
{	int sayi,sonuc;
	geri_don:
		sonuc = 0;
			system("cls");
			printf("------------------OPARETOR ISLEMLER -----------------\n");
			printf("1-)Cift sayilari topla\n");
			printf("2-)Tek sayilari topla\n");
			printf("3-)Tum sayilari topla\n");
			printf("0-)Cikis icin 0'a basiniz.\n");
			printf("-----------------------------------------------------\n");
			printf("Seciminizi yapiniz = ");
			scanf("%d",&sayi);
		
		if(sayi==1)
		{
			sonuc = cift_topla();
		}
		else if(sayi==2)
		{
			sonuc =	tek_topla();
		}
		else if(sayi==3)
		{
			sonuc = toplam();
		}
		else if(sayi==0)	
		{
			exit(0);
		}
		else
		{
			printf("Lutfen baska sayi giriniz.\n\n\n");
			system("pause");
			goto geri_don;	
		}	
		
		printf("Toplam sonuc: %d\n\n", sonuc);
		system("pause");
		goto geri_don;
}
