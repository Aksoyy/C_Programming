#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(int argc, char *argv[]) 
{	
	int a; 
	printf("Bir deger giriniz = "); scanf("%d",&a);
	printf ("Sonuc = %d\n",faktoriyel(a));
	system("pause");
}

int faktoriyel(int a)
{
	if(a==0)
	{
		return 1;
	}
	else
	{
		return a* faktoriyel(a-1);	
	}
}
