#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int i,sayi,birler,onlar,yuzler,binler,tersi;
	for(i=1000;i<=9999;i++)
	{	
		sayi=i*4;
		birler=i%10;
		onlar=(i/10)%10;
		yuzler=(i/100)%10;
		binler=i/1000;
		tersi=(birler*1000)+(onlar*100)+(yuzler*10)+(binler*1);
		if(tersi==sayi)
		{
			printf("Tersi = %d\n",i);
			system("pause");
		}
	}
	return 0;
}
