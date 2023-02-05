#include <iostream>

using namespace std;

int main()
{
    int n=0;
    int count=0;
    
    cin>>n;
    
    if(n<=99)
    {
        cout<< 99;
    }
    else
    {
        while(n >= (count*100+49) )
        {
            count++;
        }
        
        cout<< (count-1)*100+99;
    }
}
