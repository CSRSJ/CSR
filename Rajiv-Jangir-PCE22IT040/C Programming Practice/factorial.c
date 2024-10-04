#include<stdio.h>

int main()
{
    int num,fact = 1;
    printf("Enter a Number to calculate factorial:\n");
    scanf("%d",&num);

    for(int i=1;i<=num;i++){
        fact = fact*i;
    }
    printf("Factorial of Number %d is %d",num,fact);

    return 0;
}