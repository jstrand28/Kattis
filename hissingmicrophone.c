#include <stdio.h>
#include <string.h>
//#include <conio.h>

char p[1000];
int s=0;

int main() {
    scanf("%s", p);
    int len=strlen(p);
    for(int i=0;i<len;i++){
        if(p[i]=='s'&& p[i+1]=='s' && s == 0){
            printf("hiss\n");
            s+=1;
        }
    }
    if(s==0){
        printf("no hiss");
    }
    return 0;
}
