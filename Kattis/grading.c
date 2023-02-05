#include <stdio.h>

int a, b, c, d, e, x;

int main(){
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    scanf("%d", &x);
    if(a<=x){
        printf("A");
    }
    else if(a>x & x>=b){
        printf("B");
    }
    else if(b>x & x>=c){
        printf("C");
    }
    else if(c>x & x>=d){
        printf("D");
    }
    else if(d>x & x>=e){
        printf("E");
    }
    else if(e>x){
        printf("F");
    }
}
