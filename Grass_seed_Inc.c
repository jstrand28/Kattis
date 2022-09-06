#include <stdio.h>
#include <string.h>

int c, w, l, n;
double s=0.0000000;

int main(){
	scanf("%d %d", &c, &n);
	for(int i=1; i<=n; i++){
	   scanf("%d %d", &w, &l);
	   s+=w*l;
	}
	s=s*c;
	printf("%lf\n", s);
	return 0;
}