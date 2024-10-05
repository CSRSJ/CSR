#include<stdio.h>

int main()
{
    int year;
    printf("Enter a year:\n");
    scanf("%d",&year);

    if(year%400 == 0 ){
        printf("%d is a Leap Year:\n",year);
    }

    else if(year % 100 == 0){
        printf("%d is Not a Leap Year:\n",year);  
    }
    else if(year % 4 == 0){
        printf("%d is a Leap Year:\n",year);  
    }
    else{
        printf("%d is Not a Leap Year:\n",year);
    }

}