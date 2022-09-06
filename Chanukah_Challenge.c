#include <stdio.h>
#include <string.h>

int k, n, p;
int s;
int main(){
	scanf("%d", &p);
	for(int i=0; i<=p; i++){
    	scanf("%d %d", &k, &n);
    	s=0;
		s=n + (n*(n+1))/2;
		printf("%d %d\n", k, s);
	}
	return 0;
}