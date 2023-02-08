#include <iostream>

using namespace std;

int getFactorial(int x){
    long fact=1;
    if(x<0){
        fact = 0;
    }
    else{
        for(int i=1; i <= x; i++){
            fact*= i;
        }
    }
    return fact;
}

int main(){
    while(cin.eof()){
        string str;
        cin >> str;
        int len = str.length();
        cout << getFactorial(len);
    }
}