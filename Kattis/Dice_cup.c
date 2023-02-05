#include <stdio.h>
#include <string.h>

int k, n, o, l;
int i=0;
int main(){
	scanf("%d", &k);
	scanf("%d", &n);
	//printf("%d %d", k, n);
	o=n+1;
	//printf("%d", o);
	l=k+1;
	if(o>=l){
	    for(i=l; i<=o; i++){
    	    printf("%d\n", i);
	    }
	}
	else{
	    for(i=o; i<=l; i++){
    	    printf("%d\n", i);
	    }
	}
	return 0;
}