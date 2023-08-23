/*
    If cost price and selling price of an item is
    input through the keyboard, write a program to
    determine whether the seller has made profit or
    incurred loss. Also determine how much profit he
    made or loss he incurred.

    profit = Cost Price < Selling Price ;
    loss   = Cost Price > Selling Price ;
*/

#include <stdio.h>
int main()
{
    int cost_price;
    int selling_price;
    printf("Enter Cost Price Of the :");
    scanf("%d", &cost_price);
    printf("Enter Selling Price Of the :");
    scanf("%d", &selling_price);
    if (cost_price < selling_price)
    {
        printf("Seller Has Made Profit \n");
        printf("Seller Has Made Profit by %d :", selling_price - cost_price);
    }
    else
    {
        printf("Seller Has Incurred loss \n");
        printf("Seller Has  Incurred Loss by %d :", cost_price - selling_price);
    }
    return 0;
}