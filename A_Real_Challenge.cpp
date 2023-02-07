#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int getNumberDecimal(double x){
    int count=0;
    x = x-int(x);
    if(x < 1){
        do{
            count++;
            x*= 10;
            x = x -int(x);
        }while(x != 0);
    }
    return count;
}

int main(){
    double n, x;
    cin >> n;
    x= sqrt(n);
    x*=4;
    int i = getNumberDecimal(x);
    if(x-int(x) == 0){
        i-=1;
    }
    cout << fixed << setprecision(i) << x;
}
