#include <stdio.h>
#include <string.h>

int n, a, b,last;
int y=0;

int main() {
    while(n!=-1){
        y=0;
        last=0;
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            scanf("%d %d", &a, &b);
            //printf("%d", a);
            y+=a*(b-last);
            //printf("%d",y);
            last = b;
        }
        if(y>0){
            printf("%d miles\n", y);
        }
    }
    return 0;
}
