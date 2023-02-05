
#include <stdio.h>

int n;

int main()
{
    //parameters
    int N;
    int P;
    int D;
    int x = 1;

    //gets the inputs
    printf("Enter an N: ");
    scanf("%d", &N);
    printf("Enter an P: ");
    scanf("%d", &P);
    n = N;
    while(n > 0)
    {
        printf("Enter a description for contestant: ");
        n = n - 1;
        scanf("%s", &D);
    }
    if(1 <= N)
    {
        if(P <= 1000)
        {
        printf("%d", P);
        }
    }
    return 0;

}   