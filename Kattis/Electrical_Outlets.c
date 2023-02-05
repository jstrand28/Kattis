#include <stdio.h>
#include <string.h>

int k, n, o;
int s;
int main(){
	scanf("%d", &n);
	for(int i=0; i<n; i++){
	    s=0;
	    scanf("%d", &k);
	    for(int i=0;i<k;i++){
	        scanf("%d", &o);
	        s+=o;
	    }
	    s-=k-1;
	    printf("%d\n", s);
	}
	return 0;
}