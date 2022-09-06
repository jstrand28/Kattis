#include <stdio.h>
#include <string.h>
#include <math.h>

char m[1001];
char d[1001];

int main() {
    //input stage
    //int l, l1;
    //l = strlen(d);
    //l1 = strlen(m);
    scanf("%s %s", &m, &d);
    (printf(strlen(m) < strlen(d) ? "no\n" : "go\n"));
    return 0;    
 }