#include<stdio.h>
#include<conio.h>

double getfloat();

int main() /*Main is written to check the getfloat function*/
{
double num;
printf(" Enter a Floating Number:\n");
num = getfloat();
printf("\nNumber : %lf\n", num);
_getch();
return 0;
}

double getfloat()
{
double num = 0;
char number[20];
scanf("%s", number);
sscanf(number, "%lf", &num);
return num;
}