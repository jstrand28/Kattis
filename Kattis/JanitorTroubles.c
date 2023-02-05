#include <stdio.h>
#include <math.h>

int a, b, c, d;
double ma=0.00;
double s=0;

int main() {
    scanf("%d %d %d %d",&a, &b, &c, &d);
    s=(a+b+c+d)/2.0;
    //printf("%d", s);
    ma = sqrt((s-a)*(s-b)*(s-c)*(s-d));
    printf("%.6f\n", ma);
	return 0;
}
