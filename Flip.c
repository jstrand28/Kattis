#include <stdio.h>

int main() {
    char a[3];
    char b[3];
    char c[3];
    scanf("%s %s", &a, &b);
    if(a[2] > b[2]){
        c[0]=a[2];
        c[1]=a[1];
        c[2]=a[0];
    }
    else if(a[2]<b[2]){
        c[0]=b[2];
        c[1]=b[1];
        c[2]=b[0];
    }
    else{
        if(a[1] > b[1]){
            c[0]=a[2];
            c[1]=a[1];
            c[2]=a[0];
        }
        else if(a[1]< b[1]){
            c[0]=b[2];
            c[1]=b[1];
            c[2]=b[0];
        }
        else{
            if(a[2]> b[2]){
                c[0]=a[2];
                c[1]=a[1];
                c[2]=a[0];
            }
            else if(a[2]<b[2]){
                c[0]=b[2];
                c[1]=b[1];
                c[2]=b[0];
            }
        }
    }
    printf("%s", c);

    return 0;
}