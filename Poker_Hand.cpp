#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    char x[5];
    int j=0, count= 0, last_count= 0;
    getline(cin, str);
    int len = str.length();
    for(int i= 0; i < len; i++){
        if(i == 0){
            x[j] = str[i];
            j++;
        }
        if(str[i] == ' '){
            i++;
            x[j] = str[i];
            j++;
        }
    }
    for(int i= 0; i < 5; i++){
        count = 1;
        for(int k= 0; k < 5; k++){
            if(i != k){
                if(x[i] == x[k]){
                    count++;
                }
            }
        }
        if(count > last_count){
            last_count = count;
        }
    }
    cout << last_count;
    return 0;
}
