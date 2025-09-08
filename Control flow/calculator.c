#include <stdio.h>

int main(){
    int opt,a,b;
    printf("Select operation to be performed from 1 to 4\n");
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplaction\n");
    printf("4.Division\n");
    scanf("%d",&opt);

    switch(opt){
        case 1:
            printf("Enter 2 numbers to perform addition leaving space : ");
            scanf("%d%d",&a,&b);
            printf("The sum is %d",a+b);
            break;
        case 2:
            printf("Enter 2 numbers to perform Subtraction leaving space : ");
            scanf("%d%d",&a,&b);
            printf("The Difference is %d",a-b);
            break;
        case 3:
            printf("Enter 2 numbers to perform Multiplaction leaving space : ");
            scanf("%d%d",&a,&b);
            printf("The Product is %d",a*b);
            break;
        case 4:
            printf("Enter 2 numbers to perform Division leaving space : ");
            scanf("%d%d",&a,&b);
            printf("The Quotient is %d",a/b);
            break;
        default:
            printf("Invalid Input");
            break;
    }
}