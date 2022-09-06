#include <stdio.h>

int sum = 0;
char s, a, b;

int main() {
    //input stage
    int n, i, x;
    scanf("%d %c", &n, &s);
    //printf("%", s);
    for(i=0;i<n;i++){
        printf("%d", i);
        for(x=0;x<4;x++){
            scanf("%c", &a);
            scanf("%c", &b);
            printf("%d", x);
            //printf("%c", a);
            //printf("%c", b);
            if(b == s){
                //printf("%s", "Pass");
                if(a == 'A'){
                    sum+=11;
                }
                else if(a == 'K'){
                    sum+=4;
                }
                else if(a == 'Q'){
                    sum+=3;
                }
                else if(a == 'J'){
                    sum+=20;
                }
                else if(a == 'T'){
                    sum+=10;
                }
                else if(a == '9'){
                    sum+=14;
                }
            }
            else{
                if(a == 'A'){
                    sum+=11;
                }
                else if(a == 'K'){
                    sum+=4;
                }
                else if(a == 'Q'){
                    sum+=3;
                }
                else if(a == 'J'){
                    sum+=2;
                }
                else if(a == 'T'){
                    sum+=10;
                }
                else{
                    sum+=0;
                }
            }
        }
    }
    printf("%d", sum);
    return 0;    
}