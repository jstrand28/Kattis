#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i=0; i<t;i++){
        int n;
        cin >> n;
        if(n%400 != 0){
            cout << n/400 +1 << endl;
        }
        else{
            cout << n/400 << endl;
        }
    }
}