#include <stdio.h>
int x, y;
int main(){
    printf("%s", "x: ");
    scanf("%d", &x);
    printf("%s", "y: ");
    scanf("%d", &y);
    if(x != 0 & y != 0){
        if(x > 0 & y > 0){
            printf("%d", 1);
        }
        if(x < 0 & y > 0){
            printf("%d", 2);
        }
        if(x > 0 & y < 0){
            printf("%d", 4);
        }
        if(x < 0 & y < 0){
            printf("%d", 3);
        }
    }
} 