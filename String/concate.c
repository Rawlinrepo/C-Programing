#include <stdio.h>
#include <string.h>

int main(){
    char arr1[] ={"Hello "};
    char arr2[10] ={"world"};

    strcat(arr1,arr2);

    printf("%s",arr1);
}