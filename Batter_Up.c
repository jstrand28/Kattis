#include <stdio.h>

double s=0.000;
int i;
int main()
{
	int n, w;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &w);
		//printf("%d", w);
		if(w>0){
		    s+=w;
		}
		else if(w == -1){
		    //printf("%d", i);
		    n=n-1;
		    i--;
		}
		//printf("%lf\n", s);
	}
	s=s/n;
	printf("%lf", s);
	return 0;
}