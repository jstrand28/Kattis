#include <stdio.h>


int main() {
    //input stage
    int wc, hc, ws, hs;
    scanf("%d %d %d %d", &wc, &hc, &ws, &hs);
    int check1, check2;
    check1 = wc-2;
    check2 = hc-2;
    if(check1>=ws & check2>=hs){
        printf("%d", 1);
    }
    else{
        printf("%d", 0);
    }
    return 0;    
}