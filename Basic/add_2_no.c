#include <stdio.h>

int main(){
    int num1, num2, sum;

    printf("Enter First number : ");
    scanf("%d", &num1);

    printf("Enter the Second number : ");
    scanf("%d",&num2);

    sum = num1 + num2;
    
    printf("The sum of %d and %d is : %d", num1,num2,sum);
    return 0;
}