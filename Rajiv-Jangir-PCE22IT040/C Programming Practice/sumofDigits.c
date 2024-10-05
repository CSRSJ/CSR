#include<stdio.h>

int main(){
   
    int num;
    int a,b,c,d,e;
    
    int sum;
    printf("Enter a 5 digit number to calculate sum of its each digit:\n");
    scanf("%d",&num);
    e = num%10;
    d = (num/10)%10;
    c = (num/100)%10;
    b = (num/1000)%10;
    a = (num/10000)%10;
    sum = a+b+c+d+e;

    printf("The sum of digits of no. %d is %d \n",num,sum);
    
   return 0;

}