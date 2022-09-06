#include <stdio.h>

int main() {
    int n, i, s, f;
    s = 0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d", &f);
        //printf("%d", f);
        if(f<0){
            s+=1;
        }
    }
    printf("%d", s);
    return 0;    
}