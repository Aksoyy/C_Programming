#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void perfect(int sayi)
{
	int a=1,gecici=0,s1;
	
	for (s1=1;s1<=sayi;s1++)
	{
		for(a=1;a<s1;a++)
		{
			if( s1%a==0 )
			{
				gecici = gecici + a;
			}
		}
		
		if( s1==gecici)
		{
			printf("%d\n",gecici);	
		}	
	
	gecici = 0;
	}
}

int main(int argc, char *argv[]) 
{
	perfect(30);
	perfect(20);
	perfect(1000);
	return 0;
}
