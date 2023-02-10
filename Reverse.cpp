#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    vector <int> arr;
   int n;
   cin >> n;
   for(int i=0; i<n;i++){
       int temp;
       cin >> temp;
       arr.push_back(temp);
   }
   reverse(arr.begin(), arr.end());
   for(const int& i : arr){
       cout << i << endl;
   }
}
