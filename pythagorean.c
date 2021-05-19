#include <stdio.h>
#include <cs50.h>

int main(){
    float a,b,c;

    a = get_float("side 1 ");
    b = get_float("side 2 ");
    c = get_float("side 3 ");
    if (a<b){
        if (b<c){
            if (a*a + b*b == c*c){
                printf("Yes");
            }
            else{
                printf("No");
            }
        }
    }
    else{
        if (a<c){
            if (a*a + b*b == c*c){
                printf("Yes");
            }
            else{
                printf("No");
            }
        }
    }
}