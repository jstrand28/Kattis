#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n, count=0;
    cin >> n;
    char correct[n], Hanh[n-1];
    for(int i=0; i<n;i++){
        char temp;
        cin >> temp;
        correct[i] = temp;
    }
    for(int i= 0; i<n-1;i++){
        Hanh[i] = correct[i+1];
    }
    for(int i = 0; i<n-1;i++){
        if(Hanh[i] == correct[i]){
            count++;
        }
    }
    cout << count;
}
