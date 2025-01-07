// cost price & selling price taken from user check whether seller gets profit or loss  and also tell how much profit or loss and also find percentage
#include<stdio.h>
int main(){
    float selling_price,cost_price,profit,loss;
    float percentage;
    printf("Enter cost price:");
    scanf("%f",&cost_price);

    printf("Enter selling price:");
    scanf("%f",&selling_price);
     if (selling_price> cost_price)
     
     {
        profit = selling_price - cost_price;
        printf("selling price is more than cost price therefore the profit is %f \n",profit);
        percentage = (profit/cost_price)*100;
        printf("The profit percentage is %f",percentage);
     }
     else{
        loss = cost_price - selling_price;
        printf("cost price is more than selling price therefore the loss is %f \n",loss);
        percentage = (loss/cost_price)*100;
        printf("The loss percentage is %f",percentage);

     }

    return 0;

}