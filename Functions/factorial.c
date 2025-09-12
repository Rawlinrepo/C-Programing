#include <stdio.h>

int fac(int num){
    if (num <=1)
    return num;

    return num * fac(num -1);

}
int main(){
    int num = 5;
    printf("Factorial of %d is : %d",num,fac(num));
}