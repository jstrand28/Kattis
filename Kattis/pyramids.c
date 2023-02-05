#include <stdio.h>
#include <math.h>

int main() {
    int a =1;
    int s=0;
    int layer=0;
    int N;
    scanf("%d", &N);
    while(N>=s){
        s+=pow(a,2);
        a+=2;
        layer++;
        if(N<s){
            layer--;
        }
    }
    printf("%d", layer);
    return 0;
}
