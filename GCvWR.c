#include <stdio.h>

int main() {

    //input stage
    int tw;
    int n, g, t;
    int i;
    scanf("%d %d %d", &g, &t, &n);
    tw = (g-t)*.9;
    int w;
    for(i=0;i<n;i++){
        scanf("%d", &w);
        tw=tw-w;
    }

    //output
    printf("%d", tw);
    return 0;    
}