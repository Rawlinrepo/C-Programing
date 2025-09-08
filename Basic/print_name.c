#include <stdio.h>

int main(){
    int age;
    char string[30];
    char location[50];

    printf("Enter your name :\n");
    scanf("%s", string);

    printf("Enter your age\n");
    scanf("%d", &age);
    getchar();
    
    printf("Enter your city : \n");
    fgets(location , sizeof(location), stdin);

    printf("Name is : %s\n", string);
    printf("Age is : %d\n", age);
    printf("Your location is : %s",location);
    return 0;
}