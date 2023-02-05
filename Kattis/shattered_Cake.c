#include <stdio.h>
#include <string.h>

int L=0;
int w, l, n, W;

int main() {
    scanf("%d",&W);
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d %d", &w, &l);
        L+=w*l;
    }
	L=L/W;
    printf("%d", L);
    return 0;
}