#include <stdio.h>
#include <string.h>

int x,y,n;

int main(){
	scanf("%d %d %d", &x, &y, &n);
	for(int i=1; i<=n; i++){
	    if(i%x==0){
	        printf("Fizz");
	        if(i%y==0){
	            printf("Buzz\n");
	        }
	        else{
	            printf("\n");
	        }
	    }
	    else if(i%y==0){
	        printf("Buzz");
	        if(i%x==0){
	            printf("Fizz\n");
	        }
	        else{
	            printf("\n");
	        }
	    }
	    else{
	        printf("%d\n", i);
	    }
	}
	return 0;
}