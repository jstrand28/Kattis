#include <stdio.h>

int s;

int main() {
    //input stage
    int n, i;
    scanf("%d", &n);
    int t[n];
    for(i=1;i<=n;i++){
        int j;
        scanf("%d", &j);
        t[i]=j;
        s=t[n]-t[1];
    }
    if(n%2==0){
        printf("%d", s);
    }
    else{
        printf("still running");
    }
    return 0;    
}