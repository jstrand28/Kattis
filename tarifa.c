#include <stdio.h>
#include <string.h>

int s=0;
int r, n;

int main() {
    scanf("%d",&r);
    scanf("%d", &n);
    s= (n+1)*r;
    int p[n];
    for(int i=0;i<n;i++){
        scanf("%d", &p[i]);
        s -=p[i];
    }
    printf("%d", s);
    return 0;
}