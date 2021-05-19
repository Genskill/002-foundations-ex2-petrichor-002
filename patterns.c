#include <stdio.h>
#include <cs50.h>

int main(){
    int pattern;
    int rows;
    int i,j,k;
    pattern = get_int("Enter type of pattern (1 or 2) ");
    rows =get_int("Number of rows");
    if (pattern == 1){
        for(i = 0;i<=rows; i++){
            for(j = rows;j>i; j--){
                printf("#");
            }
        printf("\n");
        }
    }
    else{
        for(i = 0;i<=rows;i++){
            for(j = rows;j>i;j--){
                printf(" ");
            }
            for(k = 0;k <= j;k++)
            {
            printf("#");
            }
         printf("\n");
        }
    }
}
