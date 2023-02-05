#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    int p=1;
    int d=0;
    int s=0;
    scanf("%d", &n);
    int z=n;
    while(1<=z/2){
        p*=2;
        //printf("1");
        d++;
        z=z/2;
        //printf("%d", z);
    }
    while(n>=0){
        s+=p;
        d++;
        if(s >= n){
            break;
        }
    }
    printf("%d", d);
    return 0;
}
