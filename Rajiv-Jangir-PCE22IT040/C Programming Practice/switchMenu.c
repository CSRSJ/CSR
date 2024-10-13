#include<stdio.h>
#include<stdlib.h>

int main(){
    int num,choice;
    int fact = 1;
    int flag = 0;
    printf("Enter a Number:\n");
    scanf("%d",&num);
    while(num){

        printf("Enter your choice:\n");
        printf("1.Factorial\n");
        printf("2.Prime or Not\n");
        printf("3.Odd or even\n");
        printf("4.Exit\n");
        scanf("%d",&choice);

        switch(choice){
            case 1:

               
                for(int i=1;i<=num;i++){
                    fact = i*fact;
                }
                printf("Factorial of number %d is %d\n",num,fact);
                break;
        
            case 2:
                    
                    for(int i = 2;i<num;i++){
                        if(num%i==0){
                            printf("Not Prime:\n");
                            break;
                            flag = 1;
                        }
                        else if(flag == 0){
                            printf("Prime:\n");
                            break;
                        }
                    }
                    break;
            case 3:
                if(num%2==0){
                    printf("Even:\n");
                }
                else{
                    printf("Odd:\n");
                }
                break;
            case 4 :
                exit(0);
            default :
            printf("Invalid Choice:\n");

        }

    }
}