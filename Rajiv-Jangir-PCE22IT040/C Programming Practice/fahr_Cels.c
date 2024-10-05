#include<stdio.h>

int main(){

    float fahr;
    printf("Enter Temperature in degree fahrenheit:\n");
    scanf("%f",&fahr);

    float cels;
    cels = (fahr - 32)*5/9;

    printf("The degree fahrenheit %.2f is converted into degree celsius is %.2f",fahr,cels);

    return 0;

}