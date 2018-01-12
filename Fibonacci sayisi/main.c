#include <stdio.h>

int main()
{
	int sayi,sonuc;
	
	printf("Islem icin bir sayi giriniz = "); scanf("%d",&sayi);
	
	sonuc = fibonacci(sayi);
	
	printf("Islemin sonucu = %d\n",sonuc);
	
	system("pause");
	return 0;
}

int fibonacci(int s1)
{
	int d1=0,d2=1,i=2,atama=0;
	
	switch (s1)
	{
		case 0: return 0;
		case 1: return 1;
	}
	
	for (i=2;i<=s1;i++)
	{
		atama = d1 + d2;
		d1 = d2;
		d2 = atama;
	}
	return atama;
}
