#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int getNumberDecimal(float x){
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

int main() {
    double n;
    cin >> n;
    double sum = n / 4;
    int j = getNumberDecimal(sum);
    if(j == 0){
        j++;
    }
    cout << fixed << setprecision(j) << sum;
    return 0;
}