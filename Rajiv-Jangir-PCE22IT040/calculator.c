#include<stdio.h>

int calculator();     //funtion Declaration
int main(){

    int a,b;
    printf("Enter the value of a:\n");
    scanf("%d",&a);
    printf("Enter the value of b:\n");
    scanf("%d",&b);

    int result = calculator(a,b);  // Funtion calling
    printf("Sum is %d",result);
    return 0;
}
int calculator(int a, int b){ //Funtion Defination
    int c = a+b;

    return(c);
}