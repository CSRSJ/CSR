#include<stdio.h>

int swap(int* a,int* b){    //Funtion Defination
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){

    int a,b;
    printf("Enter the value of a:\n");
    scanf("%d",&a);
    printf("Enter the value of b:\n");
    scanf("%d",&b);

    printf("Before the swaping:a = %d and b = %d \n",a,b);

    swap(&a,&b);     // Funtion Calling

    printf("After the swaping:a = %d and b = %d \n",a,b);

    return 0;
}