#include<stdio.h>

int main(){

    int costPrice;
    int sellPrice;
    int  profit,loss;
    float profit_percent, loss_percent;

    printf("Enter the Cost Price:\n");
    scanf("%d",&costPrice);

    printf("Enter the Selling Price:\n");
    scanf("%d",&sellPrice);

    if(costPrice<sellPrice){
        profit = sellPrice - costPrice;

        profit_percent = (float)profit/(float)costPrice*100;
        printf("You are in profit by %.2f percent \n",profit_percent);
    }
    else if(costPrice>sellPrice){
        loss = costPrice - sellPrice;

        loss_percent = (float)loss/(float)costPrice*100;
        printf("You are in Loss by %.2f percent \n",loss_percent);
    }
    else{
        printf("Cost price = Selling price\n");
    }
    return 0;
}