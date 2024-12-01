#include <unistd.h>
#include <stdio.h>

int price;
int sum = 0;
int i = 1;
float discount_cal(int price_item,int amount)
{
    if  (amount == 1)
    {
        return (price_item * 0.95);
    } 
    else if (amount == 2) {
        return (price_item * 0.85);
    }
    else if (amount == 3) {
        return (price_item * 0.70);
    }
}
int main( ) {
    while (i < 4) {
        printf("\nEnter Price : %d: ",i);
        scanf("%d",&price);
        sum+=price;
        float discount = discount_cal(sum,i);
        printf("Price after Discount : %.2f ",discount);
        printf("\nVAT : %.2f ",discount * 0.07);
        printf("\nPrice after VAT :  %.2f ",discount * 0.93);
        i++;
    }
    return (0);
}

