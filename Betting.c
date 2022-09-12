#include <stdio.h>

int main() {
    double a=0;
    double b=0;
    double pa=0.000;
    double pb=0.000;
    scanf("%lf", &a);
    b=100-a;
    pa = 100/a;
    pb = 100/b;
    printf("%.3f\n", pa);
    printf("%.3f\n", pb);
    return 0;
}
