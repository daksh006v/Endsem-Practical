#include<stdio.h>

int main()
{
    int mat[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };
    int sum1 = 0;
    int sum2 = 0;

    for(int i =0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==1){
                sum1 = sum1 + mat[i][j];
            }
            if(j==1){
                sum2 = sum2 + mat[i][j];
            }
        }
    };
    printf("Sum of 2nd row: %d\n",sum1);
    printf("Sum of 2nd column: %d\n",sum2);


 return 0;
}