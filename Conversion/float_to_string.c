#include <stdio.h>
#include <string.h>

int main(){
    float a= 23.423;
    char arr[10];

    sprintf(arr,"%f", a);

    printf("String: %s\n", arr);
    printf("Length: %zu\n", strlen(arr));
}