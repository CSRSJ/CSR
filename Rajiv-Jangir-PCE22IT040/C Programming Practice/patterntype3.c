/*In this program we make Three More complex Patterns*/
#include<stdio.h>

int main(){

    int size = 4;
    /*Pattern 1 
    *             * 
    * *         * *
    * * *     * * *
    * * * * * * * *
    */
    for(int i=size;i>0;i--){
        for(int j = i-1;j<size;j++){
            printf("* ");
        }
        for(int k = 1;k<(2*i-1);k++){
                printf("  ");
        }
        for(int l=size;l>=i;l--){
             printf("* ");
        }
       
        printf("\n");
    }
    printf("\n\n");
    /*Pattern 2
    * * * * * * * *
    * * *     * * *
    * *         * *
    *             *
    */
    for(int i=1;i<=size;i++){
        for(int j = i-1;j<size;j++){
            printf("* ");
        }
        for(int k = 1;k<(2*i-1);k++){
                printf("  ");
        }
        for(int l=size;l>=i;l--){
             printf("* ");
        }
       
        printf("\n");
    }
    printf("\n\n");
    /*Pattern 3 Butterfly
    *             *
    * *         * *
    * * *     * * *
    * * * * * * * *
    * * *     * * *
    * *         * *
    *             *
    */
    
    for(int i=size;i>0;i--){
        for(int j = i-1;j<size;j++){
            printf("* ");
        }
        for(int k = 1;k<(2*i-1);k++){
                printf("  ");
        }
        for(int l=size;l>=i;l--){
             printf("* ");
        }
       
        printf("\n");
    }
    for(int i=2;i<=size;i++){
        for(int j = i-1;j<size;j++){
            printf("* ");
        }
        for(int k = 1;k<(2*i-1);k++){
                printf("  ");
        }
        for(int l=size;l>=i;l--){
             printf("* ");
        }
       
        printf("\n");
    }


    
   



}