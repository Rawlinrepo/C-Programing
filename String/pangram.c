#include <stdio.h>
#include <ctype.h>
int main(){
    char str[] = "The five boxing wizards ump quickly" ;
    int cnt=1;
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
    //printf("%s\n", str);
    for(int i=97;i<123;i++){
        for(int j =0;j<sizeof(str)/sizeof(str[0])-2;j++){
            if(i == str[j]){
                cnt++;
                break;
            }
        }
    }
    printf("%d\n",cnt);
    if(cnt==26){
        printf("Is a Pangram");
    }
    else{
        printf("Not a Pangram");
    }
}