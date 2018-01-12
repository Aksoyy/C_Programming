#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int s,i;
    printf("Bir sayi giriniz = "); scanf("%d", &s);
	printf ("\n");

  	for (i = 2; s != 1; i ++)
    {
        if (s % i == 0)
        {
            printf ("Girilen sayinin asal carpanlari = %d\n",i);
            while(s%i==0)
            {
            	s=s/i;
			}
        }
    
	}
  	system("pause");
    return 0;
}
