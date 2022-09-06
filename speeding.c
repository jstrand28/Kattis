
// C program to implement
// scanf
#include <stdio.h>
 
// Driver code
int main()
{
    int a,i, b, n, lt, ld, ls, distance;
    lt=0;
    ld=0;
    ls =0;
    distance=0;
    scanf("%d", &n);
    for(i=0; i<n;i++){
        scanf("%d", &a);
        scanf("%d", &b);
        a-=lt;
        lt+=a;
        b-=ld;
        ld+=b;
        if(a>0 & b>0){
            distance=b/a;
        }
        if(distance>=ls){
            ls=distance;
        }
    }
   printf("%d", ls);
    return 0;
}
