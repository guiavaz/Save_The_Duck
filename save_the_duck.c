#include <stdio.h>

int vida;

int consequencia (int a)
{
        int resultado;
	if (a==2)
	{
		vida++;
	}
	else if (a==1)
	{
		vida=vida;
	}
	else if (a==0)
	{
		vida--;
	}
	return (vida);
}

int main ()
{
	char ch;
	int c,escolha;
	char name[20],duckname[20],ducklastname[20];
	vida=6;
	printf("Welcome to Save The Duck.\n\nQuack! Quack!\n\n");
	printf(" ___( o)>\n \\ <_. )\n  `---'\n");
	printf("\nPress C to continue...\n");
	ch=getchar();
	c=ch;// c do tipo int recebe ch do tipo char
	//printf("%d\n",c);
	//printf("%c\n",ch);

	if (c==99||c==67) //duck dies if vida=0 
	{
		vida++;
		//printf("%d\n",vida); //teste
	        printf("\n\nQuack!Quack!\n\n ___( o)>\n \\ <_. )\n  `---'\n");
		printf("Now you can save de Duck... If you continue on this way...\n\n");
	}
	else
	{
		vida=0;
		printf("If you don't follow the instructions the duck dies...\n");
		printf(" ___( x)>\n \\ <_. )\n  `---'\n");
		//printf("%d\n",vida); //teste
		return 0;
	}
	
	printf("Let's start the Game, please enter your first name:\n");
	scanf("%s",name);
	printf("Welcome %s,the Duck's Life it's in your hands.\nYou can start choosing a new name to the Duck.\n",name);
	printf("Please enter the Duck's first name:\n");
	scanf("%s",duckname);
	printf("Please enter the Duck Last Name:\n");
	scanf("%s",ducklastname);
	
	printf("Great, %s %s it's a strange name for a duck, but he loved it!\n",duckname,ducklastname);
}
