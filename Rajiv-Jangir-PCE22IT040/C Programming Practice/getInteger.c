#include<stdio.h>
#include<conio.h>

int getint();

int main()
{
int num;
printf("\n Enter any Number:\n");
num = getint();
printf("\nNumber : %d\n", num);
_getch();
return 0;
}

int getint()
	{
int num = 0;
char number[20];
scanf("%s", number);
sscanf(number, "%d", &num);
return num;
}