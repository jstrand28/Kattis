#include <stdio.h>
#include <math.h>
int n;
double d;
int main(){
    scanf("%d", &n);
    int i;
    for(i=0;i<n;i++){
        double x = 0;
        double q, y;
        scanf("%lf %lf", &q, &y);
        d += q*y;
    }
    printf("%.3f", d);
} 