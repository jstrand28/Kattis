#include <iostream>

using namespace std;

int main() {
    int n, h, v, area, big_slc;
    int temp_h, temp_v, max_v, max_h;
    cin >> n;
    cin >> h >> v;
    area = n*n;
    if(h < n && v < n){
        temp_h = n-h;
        temp_v = n-v;
        if(temp_h < h){
            max_h = h;
        }
        else if(temp_h > h){
            max_h = temp_h;
        }
        if(temp_v < v){
            max_v = v;
        }
        else if(temp_v > v){
            max_v = temp_v;
        }
        big_slc = max_v * max_h * 4;
    }
    cout << big_slc;
}