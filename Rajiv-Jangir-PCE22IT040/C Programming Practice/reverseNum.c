#include<stdio.h>

int main(){

    int num,a,b,c,d,e;
    printf("Enter a 5 Digit Number to reverse the number:\n");
    scanf("%d",&num);

    e = num%10;
    d = (num/10)%10;
    c = (num/100)%10;
    b = (num/1000)%10;
    a = (num/10000)%10;

    printf("%d%d%d%d%d",e,d,c,b,a);


}