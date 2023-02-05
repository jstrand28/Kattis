#include <stdio.h>
#include <string.h>
#include <math.h>

#define M_PI acos(-1.0)

int s=0;
int p=0;
int j=0;

int main() {
    //input stage
    int l, r;
    scanf("%d %d", &l, &r);
    //s = M_PI*pow(r, 2);
    s = sqrt(l*l*2);
    j = r*2;
    printf("%d %d", j, s);
    if(j>s){
        printf("fits");
    }
    else{
        printf("nope");
    }
    return 0;    
 }