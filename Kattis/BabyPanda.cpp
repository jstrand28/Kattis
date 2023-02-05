#include <iostream>

using namespace std;
  
int main(){
    long long n = 0, m = 0;
    int count = 0;
    cin >> n;
    //cout << n << endl;
    cin >> m;
    //cout << m << endl;
    
    for(long long i = n; i >= 0;i--){
        m = m /2;
        //cout << m << endl;
        if(m%2 == 1){
            m - 1;
            count ++;
        }
        if(m == 0){
            break;
        }
    }
    cout << count;
    return 0;
}
