#include <stdio.h>
#include <string.h>

int s=0;
int t, c, g;
char w[50];

int main() {
    scanf("%s", w);
    int len=strlen(w);
    for(int i=0;i<len;i++){
        if(w[i]=='T'){
            t+=1;
        }
        else if(w[i]=='C'){
            c+=1;
        }
        else if(w[i]=='G'){
            g+=1;
        }
    }
    s+=pow(c, 2)+pow(g, 2)+pow(t, 2);
    while(c >= 1 & g >= 1 & t >= 1){
        c-=1;
        g-=1;
        t-=1;
        s+=7;
    }
    printf("%d", s);
    return 0;
}
