#include <iostream>

using namespace std;

int main(){
    int h, w, n;
    cin >> h >> w >> n;
    int arr[n];
    int temp_w = w;
    for(int i= 0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0; i<n;i++){
        temp_w-= arr[i];
        if(temp_w == 0){
            temp_w = w;
            h--;
            if(h==0){
                cout << "YES";
            }
        }
        else if(temp_w < 0){
            cout << "NO";
            break;
        }
    }
}