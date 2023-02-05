#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    int p[n], r[n], e[n], c[n];
    for(i=0;i<n;i++){
        scanf("%d %d %d", &r[i], &e[i], &c[i]);
    }
    for(i=0;i<n;i++){
        p[i]=e[i] - c[i];

        if(p[i]>r[i]){
            printf("advertise\n");
        }
        else if(p[i]==r[i]){
            printf("does not matter\n");
        }
        else{
            printf("do not advertise\n");
        }
    }
    return 0;    
}