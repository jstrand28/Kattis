#include <stdio.h>
#include <string.h>

char s[2000];
int len;

int main(){
	scanf("%s", s);
	int d=0;
	len= strlen(s);
	for(int i=0; i<len; i++){
	    char c = s[i];
	    if(c == 'e') d++;
	}
	printf("h");
	for(int i=0; i<d*2;i++){
	    printf("e");
	}
	printf("y");
	return 0;
}