#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    double x1, x2, y1, y2, h=0, w=0;
    cin >> x1 >> y1 >> x2 >> y2;
    if(x1 < 0 && x2 > 0){
        h = x2 - x1;
    }
    else if(x1 > 0 && x2 < 0){
        h = x1 - x2;
    }
    else if(x1 < 0 && x2 < 0){
        abs(x1);
        abs(x2);
        if(x1 < x2){
            h = x2 - x1;
        }
        else{
            h = x1 - x2;
        }
    }
    else{
        if(x1 < x2){
            h = x2 - x1;
        }
        else{
            h = x1 - x2;
        }
    }
    if(y1 < 0 && y2 > 0){
        w = y2 - y1;
    }
    else if(y1 > 0 && y2 < 0){
        w = y1 - y2;
    }
    else if(y1 < 0 && y2 < 0){
        abs(y1);
        abs(y2);
        if(y1 < y2){
            w = y2 - y1;
        }
        else{
            w = y1 - y2;
        }
    }
    else{
        if(y1 < y2){
            w = y2 - y1;
        }
        else{
            w = y1 - y2;
        }
    }
    cout << fixed << setprecision(3) << w*h;
}
