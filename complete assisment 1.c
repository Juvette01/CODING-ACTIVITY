#include<stdio.h>

int main()
{
printf("PROBLEM:\n A spinning tire make 3000 \nrevolution per-minute.\nCaculate how many degree it rotates in one \nsecond Then display the results.\n\n");
    int num1;
    int num2;
    int num3;
    int result;
    
    printf("SOLUTION:\n");
    printf("Input the revolution per-minute: ");
    scanf("%d", &num1);
    printf("Input the value of one minute: ");
    scanf("%d", &num2);
    printf("Input the degree of one full rotation: ");
    scanf("%d", &num3);
    //divide and times
    result = num1 / num2 * num3;
    printf("%d  divide %d * %d\n\nANSWER:\nThe degree of it's one second rotation is %d ", num1,num2,num3,result);
}