#include <stdio.h>

int main() {
    int n, temp;
    scanf("%d", &n);
    int array[n];
    array[0] = 1;
    for(int i=2; i<=n;i++){
        scanf("%d", &temp);
        array[temp+1]=i;
    }
    for(int j=0;j<n;j++){
        printf("%d ", array[j]);
    }
    return 0;
}
