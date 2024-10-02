#include<stdio.h>

int main()
{
    int principle,Interest;
    float rate,SimpleInterest;

    printf("Enter the value of principle:\n");
    scanf("%d",&principle);

    printf("Enter the value of interest:\n");
    scanf("%d",&Interest);

    printf("Enter the value of rate:\n");
    scanf("%d",&rate);

    SimpleInterest = principle*Interest*rate/100;

    printf("%.2f\n",SimpleInterest);
    return 0;

}