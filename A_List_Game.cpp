#include <iostream>
#include <string>

using namespace std;


int main() {
    int factors= 0, factor= 2;
    int n;
    cin >> n;
    while(factor*factor <= n){
        if(n%factor == 0){
            n/= factor;
            factors++;
        }
        else{
            factor++;
        }
    }
    factors= factors+1;
    cout << factors;
    return 0;
}