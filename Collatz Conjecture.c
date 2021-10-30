#include<stdio.h>

int main()
{
    int n;
    printf("\n!COLLATZ CONJECTURE!\n\n");
  
    printf("input any positive intergers: ");
    scanf("%d", &n);

    while(n > 1 || n <= 0){
        if(n % 2 == 0 && n > 0) { //even numbers
            n = n / 2;
            printf("%d\n", n);
        }
        else if (n % 2 == 1 && n > 0) { //odd number
                n = n * 3 + 1;
                printf("%d\n", n);
            }
        else if (n < 0){
        printf("negative number are invalid");
        break;
        }
    }
    return 0;
}