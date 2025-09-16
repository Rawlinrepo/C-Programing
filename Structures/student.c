#include <stdio.h>
#include <string.h>

struct student {
    char name[25];
    int rollno;
    char class;
};

void showStudents(struct student s[], int count) {
    printf("Name                 Rollno     Class\n");
    for (int j = 0; j < count; j++) {
        printf("%-20s %-10d %-5c\n", s[j].name, s[j].rollno, s[j].class);
    }
}

int main() {
    char opt[5] = {0};
    int i = 4;
    int max = 100;

    struct student s[100] = {
        {"zzz", 12, 'A'},
        {"ttt", 20, 'B'},
        {"aaa", 30, 'G'},
        {"kkk", 44, 'B'}
    };

    while (opt[0] != 'q') {
        printf("\n-------------------\n");
        printf("Select option\n");
        printf("1. Enter student details\n");
        printf("2. See students\n");
        printf("3. Find student by Roll no\n");
        printf("4. Enter q to exit\n");
        printf("5. Sort by name\n");
        printf("Choice : ");
        scanf("%s", opt);
        getchar();
        printf("-------------------\n");

        switch (opt[0]) {
        case '1':
            if (i < max) {
                printf("Enter Student Name: ");
                scanf("%s", s[i].name);
                printf("Enter Rollno : ");
                scanf("%d", &s[i].rollno);
                getchar();
                printf("Enter Class : ");
                scanf("%c", &s[i].class);
                i++;
            }
            break;

        case '2':
            showStudents(s, i);
            break;

        case '3': {
            int roll;
            printf("Enter the rollno to find : ");
            scanf("%d", &roll);
            printf("Name                 Rollno     Class\n");
            for (int j = 0; j < i; j++) {
                if (s[j].rollno == roll) {
                    printf("%-20s %-10d %-5c\n", s[j].name, s[j].rollno, s[j].class);
                }
            }
            break;
        }

        case '5':
            for (int j = 0; j < i - 1; j++) {
                for (int k = 0; k < i - j - 1; k++) {
                    if (strcmp(s[k].name, s[k + 1].name) > 0) {
                        struct student temp = s[k];
                        s[k] = s[k + 1];
                        s[k + 1] = temp;
                    }
                }
            }
            printf("Sorted by name!\n");
            showStudents(s, i);
            break;
        case '6':
        int num;
        printf("Select by which choice to sort");
        printf("1.Roll no");
        printf("2.Class");
        scanf("%d",&num);
        switch (num)
        {
        case 1:
        for(int j = 0;j<i;j++){
            for(int k =0;k<i;k++){
                if(s[k].rollno < s[k+1].rollno){
                    struct student temp = s[k];
                    s[k] = s[k+1];
                    s[k+1] = temp; 
                    
                }
            }
        }
        showStudents(s, i);
            break;
        case 2:
        for(int j = 0;j<i;j++){
            for(int k =0;k<i;k++){
                if(s[k].class < s[k+1].class){
                    struct student temp = s[k];
                    s[k] = s[k+1];
                    s[k+1] = temp; 
                    
                }
            }
        }
        showStudents(s, i);
            break;
        
        default:
            break;
        }
        break;

        default:
            break;
        }
    }
}
