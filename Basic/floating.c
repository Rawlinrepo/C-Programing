#include <stdio.h>

int main()
{
    float A ,B, product;
    printf("Enter the First number : ");
    scanf("%f",&A);

    printf("Enter the Second Number : ");
    scanf("%f",&B);

    product = A * B;

    printf("Product of entered numbers is:%.3f", product);

    return 0;
}