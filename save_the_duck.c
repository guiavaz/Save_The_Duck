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
	char ch,escolha;
	int c;
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
	scanf("%s",&name[0]);
	printf("\nWelcome %s,the Duck's Life it's in your hands.\nYou can start choosing a new name to the Duck.\n",name);
	printf("Please enter the Duck's first name:\n");
	scanf("%s",&duckname[0]);
	printf("Please enter the Duck Last Name:\n");
	scanf("%s",&ducklastname[0]);
	
	printf("\nGreat, %s %s it's a strange name for a duck, but he loved it!\n",duckname,ducklastname);
	printf("\n%s feel happy to be with you... You're his bestfriend!\nYou're %s only friend...\n\n",duckname,duckname);
	printf("Hey %s do you want to play with %s?\n",name,duckname);
	printf("\n*****Instructions:****\n*****To choose what you want to do type the matching letter and press Enter to continue*****\n\n");
	printf("A. Play card games with %s\nB. Play hide and seek with %s\nC. I don't wanna play\n",duckname,duckname);
		
	scanf(" %c",&escolha); //lembrar de adicionar espaço antes do %c ao usar scanf
	printf("%c\n",escolha);


}
