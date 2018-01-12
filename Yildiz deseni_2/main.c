#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void yildizin_tersi(int y)
{	
	int i=y;
	while(i>=0)
	{	
		int z;
		for(z=i;z>=0;z--)
		{	
			printf("+");
		}
		printf("\n");
		i=i-1;
	}
	system("pause");
}

void main(int argc, char *argv[]) 
{
	int x;
	printf("Sayiyi giriniz = "); scanf("%d", &x);
	yildizin_tersi(x);
}
