#include <iostream>

using namespace std;

int main() {
   int n, k, temp;
   cin >> n >> k;
   for(int i= 1; i<= n; i++){
       cin >> temp;
       int check = i%k;
       if(check == 0){
          cout << temp << ' ';
       }
   }
}