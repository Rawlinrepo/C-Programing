#include <stdio.h>
#include <string.h>

int main(){
    char str1[] ="rawlin";
    char str2[] ="Rawlin";

    if(strcmp(str1,str2)!=0){
        printf("Not same");
    }
    else{
        printf("Same");
    }
}