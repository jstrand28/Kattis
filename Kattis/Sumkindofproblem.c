#include <stdio.h>
#include <math.h>

int main() {
    int n,i;
    scanf("%d", &n);
    while(n-- > 0){
        int K, N;
        scanf("%d %d", &K,&N);
        int sq = N*N;
        printf("%d %d %d %d\n",K,(sq+N)>>1, sq, sq+N);
    }
    return 0;
}
