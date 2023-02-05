#include <stdio.h>
#include <string.h>

int g,s,c;
int bp=0;

int main() {
    scanf("%d %d %d",&g,&s,&c);
    bp+=g*3+s*2+c*1;
    if(bp>=8){
        printf("Province or Gold");
    }
    else if(8>bp && bp>=5){
        printf("Duchy or ");
        if(bp>=6){
            printf("Gold");
        }
        else{
            printf("Silver");
        }
    }
    else if(5>bp && bp>=2){
        printf("Estate or ");
        if(bp>=3){
            printf("Silver");
        }
        else{
            printf("Copper");
        }
    }
    else{
        printf("Copper");
    }
    return 0;
}
