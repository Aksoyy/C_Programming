#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int sayi1,sayi2;
	char operator_simgesi;
	git: system("cls");
	printf("Operatoru giriniz = "); scanf("%c",&operator_simgesi);
	printf("Birinci sayiyi giriniz = "); scanf("%d",&sayi1);
	printf("Ikinci sayiyi giriniz = "); scanf("%d",&sayi2);
	
	switch(operator_simgesi)
	{
		case '+':
			printf("%d %c %d = %d\n",sayi1,operator_simgesi, sayi2, sayi1 + sayi2); break;
		case '-': 
			printf("%d %c %d = %d\n",sayi1,operator_simgesi, sayi2, sayi1 - sayi2); break;
		case '%':
			printf("%d %c %d = %d\n",sayi1,operator_simgesi, sayi2, sayi1 % sayi2); break;
		case '*':
			printf("%d %c %d = %d\n",sayi1,operator_simgesi, sayi2, sayi1 * sayi2); break;
		case '/':
			printf("%d %c %d = %.2f\n",sayi1,operator_simgesi, sayi2, (float)sayi1 / sayi2);break;
		default:
			printf("HATA: Tanimsiz bir operator girdiniz.\nTekrar deneyiniz.\n");
			goto git;
	}
	system("pause");	
}
