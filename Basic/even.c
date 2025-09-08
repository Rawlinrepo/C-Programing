#include <stdio.h>
#include <stdbool.h>

bool even_num(int num)
{
    if (num % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(){
    int num;
    printf("Enter Number to check : ");
    scanf("%d",&num);

    if(even_num(num)){
        printf("%d is even",num);
    }
    else{
        printf("%d is odd",num);
    }
    return 0;
}