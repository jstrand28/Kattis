#include <iostream>
#include <string>

using namespace std;

int getVowel(char x){
    int count= 0;
    if(x == 'a' || x == 'A'){
        count++;
    }
    else if(x== 'e' || x == 'E'){
        count++;
    }
    else if(x == 'I' || x == 'i'){
        count++;
    }
    else if(x== 'O' || x == 'o'){
        count++;
    }
    else if(x== 'U' || x== 'u'){
        count++;
    }
    return count;
}

int main() {
   string str;
   int count= 0;
   getline(cin, str);
   int len = str.length();
   for(int i= 0; i< len;i++){
       char temp = str[i];
       count += getVowel(temp);
   }
   cout << count;
}