/* C Program to Print Characters in a String */
#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    int i = 0;
    int l;
    scanf("%s", str);
        
    while (str[i] != '\0')
    {
        printf("%d %c \n", i, str[i]);
        l = i;
        i++;
    }
    printf("%d", l);
    if(l>3 & l<1000){
        int s = l -1;
        int nl = l+s;
        printf("%d", l);
        if(l < nl){
            str[l] = "e";
            printf("%d", nl);
        }
        str[l] = "y";
        printf("%s", str);
    }
    return 0;
}