#include<stdio.h>

void printinfo();

struct employee
{
int code;
char name[30];
int doj[3];
}hcl[50] = {

001, "Shahnawaz", 13, 1,2006,
004, "Amit Puri", 21, 6,2008,
102, "Irfan Moin", 12, 5, 2012,
131, "Shabnam", 16, 1, 2014
};

int main()
{
int i, d[3];
printf("\nEnter the current date (dd mm yyyy) : ");
scanf("%d%d%d", &d[0], &d[1], &d[2]);
printf("\nEmployees with greater than or equal to 3 years of tenure\n\n");
for (i = 0; i < 4; i++)
{
	if (d[2] - hcl[i].doj[2] > 3)
		printinfo(hcl[i]);
	else if (d[2] - hcl[i].doj[2] == 3)
	{
		if (d[1] - hcl[i].doj[1] > 0)
			printinfo(hcl[i]);
		else if (hcl[i].doj[1] == d[1])
		{
			if (d[0] - hcl[i].doj[0] >= 0)
				printinfo(hcl[i]);

		}
	}
}
return 0;
}

void printinfo(struct employee e)
{
printf("\nCode : %d", e.code);
printf("\nName : %s", e.name);
printf("\nDate of joining : %d-%d-%d\n", e.doj[0], e.doj[1], e.doj[2]);
}