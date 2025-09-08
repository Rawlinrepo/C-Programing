#include <stdio.h>

int main(){
    int num;
    int fac = 1;
    printf("Enter number to find factorial : ");
    scanf("%d",&num);
    for (int i = 1;i <= num ; i++){
        fac = fac * i;
    }
    printf("The value is : %d",fac);
}