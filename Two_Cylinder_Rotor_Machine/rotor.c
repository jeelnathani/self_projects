#include<conio.h>
#include<stdio.h>
char rotor1[26]={'f','u','e','t','r','g','z','d','s','h','y','l','k','w','j','i','b','x','m','p','c','n','a','q','v','o'};
char rotor2[26]={'q','w','e','r','t','y','u','i','o','p','a','s','d','f','g','h','j','k','l','z','x','c','v','b','n','m'};

void main()
{
	clrscr();
	char input;
	int i,j;
	printf("enter string without spaces\n\n");
	scanf("%c",&input);
	printf("initial internal mapping of cylinder 1 is:\n");
	for(i=0;i<26;i++)
	{
		printf("%c ",rotor1[i]);
	}
	printf("\ninitial internal mapping of cylinder 2 is:\n");
	for(i=0;i<26;i++)
	{
		printf("%c ",rotor2[i]);
	}

	printf("\n\n\tcylinder 1\tcylinder 2\n");
	while(input!=' ')
	{
	i=input-97;
	printf("%c",input);
	printf("\t%c\t\t",rotor1[i]);
	j=rotor1[i]-97;
	printf("%c\n",rotor2[j]);

	//rotation
	for(i=0;i<26;i++)
	{
		rotor1[i]=((rotor1[i]-97+2)%26)+'a';
		rotor2[i]=((rotor2[i]-97+1)%26)+'a';
	}

	scanf("%c",&input);
	}

	printf("final internal mapping of cylinder 1 is:\n");
	for(i=0;i<26;i++)
	{
		printf("%c ",rotor1[i]);
	}
	printf("\nfinal internal mapping of cylinder 2 is:\n");
	for(i=0;i<26;i++)
	{
		printf("%c ",rotor2[i]);
	}
	getch();
}
