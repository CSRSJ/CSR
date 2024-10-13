#include<stdio.h>

int main(){

    int num,i,j;
    printf("Enter a Number to which print all prime Numbers:\n");
    scanf("%d",&num);
   
    for(i=2; i<num; i++)
    { 
        for(j=2; j <= (i/j); j++) 
            if(!(i%j))
                break; // if factor found, not prime 
        if(j > (i/j))
            printf("%d is prime\n", i); 
    }


}