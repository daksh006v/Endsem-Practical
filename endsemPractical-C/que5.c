#include <stdio.h>

struct student {
    long int ID;
    char name[50]; 
    int marks[3];
};

int main() {
    struct student M;

    printf("Enter Your Id: ");
    scanf("%ld", &M.ID);

    printf("Enter Your Name: ");
    scanf("%49s", M.name);   

    printf("Enter Your Marks: \n");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &M.marks[i]);
    }

    printf("\nYour Details:\n");
    printf("Your Id: %ld\n", M.ID);
    printf("Your Name: %s\n", M.name);
    printf("Your Marks: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", M.marks[i]);
    }

    return 0;
}
