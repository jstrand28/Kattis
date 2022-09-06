#include <stdio.h>
#include <math.h>
int n;
int d;
int main(){
    scanf("%d", &n);
    int i;
    for(i=1;i<=n;i++){
        int p;
        scanf("%d", &p);
        d += pow(p/10, p%10);
    }
    printf("%d", d);
}