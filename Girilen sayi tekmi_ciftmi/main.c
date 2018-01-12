#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void tekmi_ciftmi(int b)
{
	if(b%2==0)
	{
		printf("Girdiginiz sayi cifttir\n");
	}
	else
	{
		printf("Girdiginiz sayi tektir\n");
	}	
}

int main(int argc, char *argv[]) 
{
	int a;
	hakan:
		printf("Sayiyi giriniz...: "); scanf("%d", &a);
	if (a!=0)
	{
		tekmi_ciftmi(a);
		goto hakan;
	}
	else
	{  
		printf("Yolun sonuna geldin.\n");
	}
	system("pause");
	return 0;
}
