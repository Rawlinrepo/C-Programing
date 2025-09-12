#include <stdio.h>

int main(){
    char str[] = "000000000000000000001232242";

    for(int i = 0;i<sizeof(str)/sizeof(str[0]);i++){
        if(str[i] != '0'){
            printf("%c",str[i]);
        }
    }
}