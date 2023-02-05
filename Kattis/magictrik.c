#include <stdio.h>
#include <string.h>

char s[50];
int flag=0;
int main() {
    scanf("%s",s);
    int len=strlen(s);
    for(int i=0;i<len;i++){
        for(int j=1;j<len;j++){
            if(i!=j){
                if(s[i]==s[j]){
                    flag=1;
                }
            }
        }
    }
    if(flag == 0){
        printf("1");
    }
    else{
        printf("0");
    }
	return 0;
}
