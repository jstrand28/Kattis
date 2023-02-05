#include <stdio.h>

int main() {
    char pre[7];
    scanf("%s", &pre);
    if(pre[1]=='5' & pre[0]=='5' & pre[2]=='5'){
        printf("%d", 1);
    }
    else{
        printf("%d", 0);
    }

    return 0;
}