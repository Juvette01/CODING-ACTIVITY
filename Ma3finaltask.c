#include <stdio.h>

int main(){
    int selection, price, payment, change;
    printf("Please select your order\n");
    printf("[1]Cola(P70)\n[2]Sprite(P75)\n[3]Water(P100)\n");
    printf("Choice: ");
    scanf("%d",&selection);
    switch(selection){

        case 1:
        price = 70;
        printf("Input payment: ");
        scanf("%d", &payment);
        if(payment>=price){
            printf("You have purchased Cola.\n");
            change = payment - price;
            printf("Change: %d", change);
        }
        else {
            printf("You don't have enough funds!");
        }
        break;

        case 2:
        price = 75;
        printf("Input Payment: ");
        scanf("%d", &payment);
        if(payment>=price){
            printf("You have purchased Sprite.\n");
            change = payment - price;
            printf("Change: %d", change);
        }
        else {
            printf("You don't have enough funds!");
        }
        break;

        case 3:
        price = 100;
        printf("Input Payment: ");
        scanf("%d", &payment);
        if(payment>=price){
            printf("You have purchased Water.\n");
            change = payment - price;
            printf("Change: %d", change);
        }
        else {
            printf("You don't have enough funds!");
        }
        break;

        default:
        printf("Invalid Input!");
    }
    return 0;
}