#include <stdio.h>

int main() {
    int f1 = 1;
    int f2 = 1;
    int f3;
    int n;

    printf("Enter Your Number: ");
    scanf("%d", &n);

    printf("Fibonacci Series: %d %d ", f1, f2);

    for(int i = 2; i < n; i++) {
        f3 = f1 + f2;   
        printf("%d ", f3);
        f1 = f2;        
        f2 = f3;
    }

    return 0;
}
