#include <stdio.h>

int s;

int main() {
    //input stage
    int n, i;
    scanf("%d", &n);
    int t[n];
    for(i=1;i<=n;i++){
        int j, a, b;
        scanf("%d", &j);
        t[i]=j;
        a = n-1;
        b = n-2;
        s = t[n]-(t[a]-t[b]);
    }
    if(n%2==0){
        printf("%d", s);
    }
    else{
        printf("still running");
    }
    return 0;    
}