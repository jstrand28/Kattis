#include <stdio.h>
#include <string.h>

int s=0;
int r, t, n, b, c, d;

int main() {
    scanf("%d %d %d",&r, &t, &n);
    s=r;
    int d[n], c[n], b[n];
    for(int i=0;i<n+1;i++){
        scanf("%d", &d[i]);
        s +=d[i];
    }
    for(int i=0;i<n;i++){
        scanf("%d", &b[i]);
        s+=b[i];
    }
    for(int i=0; i<n;i++){
        scanf("%d", &c[i]);
        if(c[i]>d[i]){
            s+=c[i]-d[i];
        }
    }
    if(s<=t){
        printf("yes");
    }
    else{
        printf("no");
    }
    return 0;
}