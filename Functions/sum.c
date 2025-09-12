#include <stdio.h>

int sum(int num){
    if (num <= 1)
        return num;
    return num + sum(num -1);
}

int main(){
int num = 7;
printf("Sum is : %d",sum(num));
}