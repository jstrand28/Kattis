#include <stdio.h>
#include <string.h>

#define SIMON "Simon says "
#define SIMON_LEN 11

int s=0;
int main() {
    //input stage
    int n;
    char k[1000];
    scanf("%d", &n);
    while(n-->0){
        fgets(k, 1000, stdin);
        size_t len = strlen(k);
        if(len <= SIMON_LEN || strncmp(k, SIMON, SIMON_LEN)) printf("\n");
        else printf("%s\n", k+SIMON_LEN);
    }
    return 0;    
 }