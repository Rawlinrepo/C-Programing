#include <stdio.h>

int main(){
    int f;
    float c;
    printf("Enter the Fahrenheit value : ");
    scanf("%d",&f);

    c = (f - 32) * 0.5555;

    printf("The Celcious value of %dF is : %.3fC",f,c);
}