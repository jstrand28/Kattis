#include <stdio.h>

int j;

int main() {
    int d, i;
    scanf("%d", &d);
    for(i=1; i<=d;i++){
        char word[100];
        scanf("%s", &word);
        //printf("%s", word);
        if(i%2 == 1){
            printf("%s\n", word);
        }
    }
    return 0;    
}