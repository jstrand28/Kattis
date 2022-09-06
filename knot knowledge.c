#include <stdio.h>
#include <string.h>

int L=0;
int n,i, f,x,a,b;
int flag;

int main() {
    scanf("%d",&n);
    int t[n], w[n-1];
    for(i=0;i<n;i++){
		scanf("%d", &a);
		t[i]=a;
	}
	for(x=0;x<n-1;x++){
		scanf("%d", &b);
		w[x]=b;
	}
	for(int x=0;x<n;x++){
	    int g=1;
	    flag =0;
	    a =t[x];
		for(i=0;i<n-1;i++){
		    b=w[i];
		    g++;
		    //printf("%d %d\n",a,b);
		    if(a==b){
		        flag=1;
		    }
		    //printf("%d", flag);
		    //printf("%d %d\n", g% n, flag);
		    if(flag == 0 & g%n==0){
		        printf("%d\n", t[x]);
		    }
		}
	}
	return 0;
}
