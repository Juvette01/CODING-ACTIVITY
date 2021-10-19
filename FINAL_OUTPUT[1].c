#include<stdio.h>

int main()
{
    printf("TEMPRETURE READER\n\n");
    int temp;
    printf("input temp: ");
    scanf("%d", & temp);
    if(temp < 0) {
        printf("freezing");
    }
    if (temp >0 && temp <10) {
        printf("very cold weather");
    }
    if(temp >10 && temp <20) {
        printf("cold weather");
    }
    if(temp >20 && temp <30) {
        printf("normal weather");
    }
    if(temp >30 && temp <40) {
        printf("its Hot");
    }
    if(temp >=40) {
        printf("its very hot");
    }
    else {
    printf("invalid input");}
    return 0;
}