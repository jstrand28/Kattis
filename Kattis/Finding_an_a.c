#include <stdio.h>
#include <string.h>

char w[1000];
int len, n;

int main(){
	scanf("%s", w);
	len = strlen(w);
	for(int i=1; i<=len; i++){
	   if(w[i]=='a'){
		  n=i;
		  break;
	   }
	}
	for(int i=n;i<len;i++){
		printf("%c", w[i]);
	}
	return 0;
}