#include <stdio.h>

int main(){
    int yr = 1994;
    printf("Enter the Year to check if Leap year");

    if (yr % 400 == 0){
        printf("Leap Year");
    }
}