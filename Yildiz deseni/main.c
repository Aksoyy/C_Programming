#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void yildiz(int b)
{ 
	int i=0;
	while(b>i)
	{
		int c;
		for(c=0;c<=i;c++)
		{
			printf("*");
		}
			printf("\n");
	
		i=i+1;
	}
	system("pause");	
}

void main(int argc, char *argv[]) 
{	
	int a;
    printf("Bir sayi girer misin = ");
    scanf("%d", &a);
	yildiz(a);
}
