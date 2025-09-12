#include <stdio.h>

int pow_fun(int num,int pow){
     if (pow == 0)
        return 1;
    else
        return num * pow_fun(num, pow - 1);
}

int main(){
    int num =11;
    int pow = 5;

    printf("Power of a Number : %d ",pow_fun(num,pow));

}