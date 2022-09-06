#include <stdio.h>
#include <string.h>

int main() {
    char buffer[101];
    scanf("%s",buffer);
    int len = strlen(buffer);
    for(int i=0; i<len;i++){
        if(buffer[i]<91 && buffer[i]>64){
            printf("%c", buffer[i]);
        }
    }
    printf("\n");
    return 0;
}