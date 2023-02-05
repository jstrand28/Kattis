#include <stdio.h>
#include <string.h>

int main() {
    int h, n, m, x;
    x=0;
    int et=0;
    int open=0;
    int close=0;
    int position=0;
    char *ph;
    int blob[10];
    scanf("%d %d %d", &h, &n, &m);
    char plot[m][n];
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            scanf("%s", ph);
            plot[j][i]=ph;
            if(ph == '.'){
                et+=1;
            }
            else if(ph == plot[j-1][i]){
                et+=1+blob
            }
            else if(ph == '#'){
                blob[x] = et;
                et=0;
                x++;
            }
            
        }
        /*if(j%2 ==0){
            printf(" ");
        }*/
    }
    if(et >= h){
        for(int j=0;j<m;j++){
            for(int i=0;i<n;i++){
                if(plot[j][i] == '.'){
                    printf("%d %d", j, i);
                }
            }
        }
    }
    return(0);
}
