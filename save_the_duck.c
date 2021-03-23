#include <stdio.h>

int main ()
{
	char ch;
	int c,vida;

	vida=6;
	printf("Welcome to Save The Duck.\n\nQuack! Quack!\n\n");
	printf(" ___( o)>\n \\ <_. )\n  `---'\n");
	printf("\nPress C to continue...\n");
	ch=getchar();
	c=ch;// c do tipo int recebe ch do tipo char
	printf("%d\n",c);
	printf("%c\n",ch);
	if (c==99||c==67)
	{
		vida++;
		//printf("%d\n",vida); //teste
	}
	else
	{
		vida=0;
		printf("If you don't follow the instructions the duck dies...\n");
		printf(" ___( x)>\n \\ <_. )\n  `---'\n");
		//printf("%d\n",vida); //teste
	}
}
