#include <stdio.h>
#include <string.h>
//#include <conio.h>

int n, t;
int fact;
char f[10];

int main() {
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        fact=1;
        scanf("%d", &t);
        for(int i=1;i<=t;i++){
            //printf("%d", i);
            fact*=i;
        }
        while(fact>=9){
            fact = fact%10;
        }
        printf("%d\n", fact);
    }
    return 0;
}
