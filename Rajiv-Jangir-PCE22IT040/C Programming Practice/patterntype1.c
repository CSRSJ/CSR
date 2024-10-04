/*In this program we make five type of patterns*/
#include<stdio.h>

int  main(){
    int size = 4;
    
    /*Simple Pattern 1
      * * * *
      * * * *
      * * * *
      * * * *
    */
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
    /*Pattern 2
      *
      * *
      * * *
      * * * *
    */
    for(int i=0;i<size;i++){
        for(int j=0;j<i+1;j++){
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");

    /*Pattern 3
      * * * *
      * * *
      * *
      *
    */
    for(int i=size;i>0;i--){
        for(int j=0;j<i;j++){
            printf("* ");
        }
        printf("\n");
    }
    printf("\n");
    /*Pattern 4
             *
          *  *
       *  *  *
    *  *  *  *
    */
    for(int i=1;i<=size;i++){
        for(int j=i;j<size;j++){
            printf("  ");
        }
        for(int k = 1;k<=i;k++){
        printf("* ");
        }
        printf("\n");
    }
    printf("\n");

     /*Pattern 5
       * * * *
         * * *
           * *
             *     
    */
    for(int i=size;i>0;i--){
        for(int j=i;j<size;j++){
            printf("  ");
        }
        for(int k = 1;k<=i;k++){
        printf("* ");
        }
        printf("\n");
    }
    printf("\n");



}