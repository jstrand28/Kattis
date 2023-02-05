#include <iostream>

using namespace std;

int main() {
    int n= 0, sum= 0, trig= 0;
    char b, suit, val;
    cin >> n >> b;
    for(int i= 0;i < 4*n;i++){
        trig= 0;
        cin >> val >> suit;
        if(suit == b) trig= 1;
        switch(val){
            case 'A':
                sum+=11;
                break;
            case 'K':
                sum+=4;
                break;
            case 'Q':
                sum+=3;
                break;
            case 'J':
                if(trig==1){
                    sum+=20;
                }
                else{
                    sum+=2;
                }
                break;
            case 'T':
                sum+= 10;
                break;
            case '9':
                if(trig==1){
                    sum+= 14;
                }
                break;
        }
    }
    cout << sum;
}