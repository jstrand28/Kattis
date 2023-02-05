#include "string.h"
#include "stdio.h"

int main()
{
    int n, d;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &d);
        if(d%2==0){
            printf("%d is even\n", d);
        }
        else{
            printf("%d is odd\n", d);
        }
    }
    return 0;
}
