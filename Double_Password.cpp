#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main() {
   string str1, str2;
   int i= 0, count= 0;
   getline(cin, str1);
   getline(cin, str2);
   int len = str1.length();
   while(len--){
       int temp1= 0,temp2= 0;
       temp1 = str1[i];
       temp2 = str2[i];
       i++;
       if(temp1 != temp2){
           count++;
       }
   }
   int out = pow(2, count);
   cout << out;
   return 0;
}