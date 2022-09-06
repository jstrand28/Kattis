#include <stdio.h>
#include <string.h>
#include <math.h>

double c=0;
double b=0;
double a=0;
int main() {
    int n;
    scanf("%d", &n);
    for(int x=0;x<n;x++)
    {
        int c=0;
        int b=0;
        int a=0;
        scanf("%d %d %d", &a, &b, &c);
        //printf("%d %d %d", a, b, c);
        if((a+b)==c){
            printf("Possible\n");
        }
        else if((a-b)==c){
            printf("Possible\n");
        }
        else if((a*b)==c){
            printf("Possible\n");
        }
        else if((a/b)==c & a%b==0){
            printf("Possible\n");
        }
        else if((b-a)==c){
            printf("Possible\n");
        }
        else if((b/a)==c & b%a==0){
            printf("Possible\n");
        }
        else{
            printf("Impossible\n");
        }
    }

    return 0;    
}