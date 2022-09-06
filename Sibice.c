#include <stdio.h>
#include <math.h>

int d=0;
int n, w, h;
int l, i;

int main()
{
	scanf("%d %d %d", &n, &w, &h);
	d = sqrt(pow(w,2)+pow(h,2));
	//printf("%d", d);
	for(i=0;i<n;i++){
		scanf("%d", &l);
		if(l<=d){
		    printf("DA\n");
		}
		else{
		    printf("NE\n");
		}
	}
	return 0;
}