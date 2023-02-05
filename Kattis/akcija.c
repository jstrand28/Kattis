#include <stdio.h>
int main() {
    int n, temp, p, v, cost;
    int array[100000];
    scanf("%d", &n);
    for(int i=1; i <= n;i++){
        scanf("%d", &p);
        array[i]=p;
    }
    for(int i = 1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(array[j] > array[i]){
                temp = array[j];
                array[j]= array[i];
                array[i]=temp;
            }
        }
    }
    for(int i=1;i<=n;i++){
        if(i%3 == 0){
            array[i]=0;
        }
        cost += array[i];
    }
    printf("%d", cost);
    return 0;
}
