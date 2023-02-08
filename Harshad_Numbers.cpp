#include <iostream>

using namespace std;

int checkHarshad(int n)
{
    int sum = 0;
    for (int temp = n; temp > 0; temp /= 10)
        sum += temp % 10;
    return (n % sum == 0);
}

int main(){
    int n , harshad = 0;
    cin >> n;
    while(harshad != 1){
        harshad = checkHarshad(n);
        if(harshad != 1){
            n++;
        }
    }
    cout << n;
}