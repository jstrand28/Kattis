#include <stdio.h>
#include <math.h>
int main()
{
    int n, c, k;
    int b[10000];
    int r[10000];
    int p;
    int sum =0;
    int g;
    int t=0;
    int l=0;
    int i=0;
    scanf("%d", &n);

    for (c = 0; c <= 31; c++)
    {
        k = n >> c;

        if (k & 1){
            b[i]=1;
            i++;
        }
        else{
            b[i]=0;
            i++;
        }
    }
    for(int x=0;x<=31;x++){
        p=b[x];
        if(b[x] == 1){
            l = x;
        }
        //printf("%d", p);
    }
    //printf("%d", l);
    //printf("\n");
    for(int q=l;q>=0;q--){
        r[t]=b[q];
        t++;
    }
    for(int j=0;j<=l;j++){
        g=r[j];
        //printf("%d", g);
        sum+=pow(2*g, j);
    }
    printf("%d", sum);
    return 0;
}
