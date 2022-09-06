#include <stdio.h>
#include <math.h>
int n;
int d;
int main(){
    scanf("%d", &n);
    int i;
    for(i=0;i<n;i++){
        int l;
        scanf("%d", &l);
        d += l;
    }
    d-=n-1;
    printf("%d", d);
}