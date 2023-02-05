#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b;
    int n = 0;
    int count = 0;
    cin >> a >> b;
    n = a;
    while(n > b){
        if(n%2 != 0){
            n++;
            //cout << n << endl;
            count++;
        }
        n=n/2;
        count++;
        
    }
    while(n != b){
        n++;
        count++;
    }
    cout << count;
    return 0;
}
