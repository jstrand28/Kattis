#include <iostream>

using namespace std;

int main() {
   int p= 0;
   cin >> p;
   while(p--){
       int k;
       int b, n;
       cin >> k >> b >> n;
       int ssd = 0;
       while(n > 0){
           ssd+= (n % b) * (n % b);
           n/=b;
       }
       cout << k << ' ' << ssd << endl;
   }
   return 0;
}