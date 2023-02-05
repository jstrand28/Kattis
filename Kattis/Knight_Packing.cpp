#include <iostream>

using namespace std;

int main(){
    int N = 0;
    int size = 0;
    cin >> N;
    size = N*N;
    if(size%2 == 0){
        cout << "second";
    }
    else if(size%2 == 1){
        cout << "first";
    }
}
