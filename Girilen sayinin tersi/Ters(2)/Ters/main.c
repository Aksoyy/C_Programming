#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ters(int s)
{
	int t=pow(10,floor(log10(abs(s)))); // 10'nun üstünü aldým  123 örnek 3 basamaklý 10^2 = 100 olur. 
	int toplam=0;
	while(t>0)
	{
		toplam += (s%10)*t; //Saysýnýn modunu alýp üst ile çarpýyorum örnek 123%10 = 3 * 100  = 300 olur.Toplam = 0+300 = 300 olur.
		s=s/10; //Sayýyý 10 ar 10 ar bölerek gidiyorum. örnek 123/10 = 12
		t=t/10; // Üstü 10 ar 10 ar bölerek 0 kadar gidiyorum. Örnek 100 /10 = 10 üst 10>0 dan büyük  olduðu için tekrar while'a döner
	}
	return toplam;
}


int main(int argc, char *argv[]) 
{
	int s;
	
	printf("Sayi giriniz : ");scanf("%d",&s);
	printf("\nSonuc : %d \n\n", ters(s)*3 );
	
	system("pause");
	return 0;
}
