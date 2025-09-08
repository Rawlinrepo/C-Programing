#include <stdio.h>

int main(){
    int num,num1,num2,num3;

    printf(" Enter 3 numbers leaving space : ");
    scanf("%d%d%d",&num1,&num2,&num3);

    if( num1 > num2){
        num = num1;
    }
    else if(num2 > num3){
        num = num2;
    }
    else{
        num = num3;
    }
    printf("%d is the largest among %d,%d,%d",num,num1,num2,num3);
}