#include <iostream>

using namespace std;

int getMax(int n, int arr[], int last_max){
    int max= 0;
    for(int i= 0; i< n; i++){
        if(last_max > arr[i]){
            if(max < arr[i]){
                max = arr[i];
            }
        }
        else if(last_max == 0){
            if(max < arr[i]){
                max = arr[i];
            }
        }
    }
    return max;
}

int main(){
    int n, t, max = 0, last_max, trig=0;
    cin >> n >> t;
    int pos[n], store[n];
    for(int i= 0; i< n; i++){
        cin >> pos[i];
    }
    for(int i= 0; i< n; i++){
        max = getMax(n, pos, last_max);
        last_max = max;
        store[i] = max - (t * (n-i-1));
        if(store[i] <= 0){
            trig = 1;
        }
    }
   
    if(trig == 0){
        cout << "YES";
    }
    else if(trig == 1){
        cout << "NO";
    }
}