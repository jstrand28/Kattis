#include <stdio.h>
#include <string.h>

int L=0;
int n;

int main() {
    scanf("%d", &n);
    int w[n];
    for(int i=1;i<=n;i++){
        scanf("%d", &w[i]);
        if(i%2==0){
            L+=w[i]-w[i-1];
        }
    }
    if(n%2==0){
        printf("%d", L);
    }
    else{
        printf("still running");
    }
    return 0;
}