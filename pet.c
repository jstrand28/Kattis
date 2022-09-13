#include <stdio.h>
#include <math.h>
int main()
{
    int g1, g2, g3, g4, g5;
    int s[5];
    int greatest=0;
    int winner;
    for(int i=0;i<5;i++){
        scanf("%d", &g1);
        scanf("%d", &g2);
        scanf("%d", &g3);
        scanf("%d", &g4);
        s[i]= g1+g2+g3+g4;
    }
    for(int j=0;j<5;j++){
        if(s[j]>greatest){
            greatest=s[j];
            winner=j+1;
        }
    }
    printf("%d %d", winner, greatest);
    return 0;
}
