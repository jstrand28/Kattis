#include <stdio.h>
#include <string.h>
#include <math.h>

int n, b, v;
int s;
double g;
int main() {
    scanf("%d", &n);
    for(int x=0;x<n;x++){
        s=0;
        g=0;
        scanf("%d", &b);
        int c[b];
        for(int i=0;i<b;i++){
            scanf("%d", &v);
            c[i]=v;
            s+=v;
        }
        s/=b;
        for(int i=0;i<b;i++){
            if(c[i]>s){
                g+=1;
            }
        }
        g/=b;
        g*=100;
        printf("%.3f", g);
        printf("%\n");
    }
}
