#include <stdio.h>

int main()
{
    char a;
    int n1, n2;

    printf("Enter Your Numbers: ");
    scanf("%d", &n1);
    scanf("%d", &n2);

    printf("Enter Your Operation: ");
    scanf(" %c", &a);   

    switch(a) {
        case '+' : printf("%d", n1 + n2);
                    break;
        case '-' : printf("%d", n1 - n2);
                    break;
        case '*' : printf("%d", n1 * n2);
                    break;
        case '/' : printf("%d", n1 / n2);
                    break;
        case '%' : printf("%d", n1 % n2);
                    break;
        default: printf("Invalid Operation");
    }

    return 0;
}
