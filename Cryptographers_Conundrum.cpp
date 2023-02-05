#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    int count= 0;
    int hold= 0;
    getline(cin, str);
    int len = str.length();
    if(len%3==0){
        int l = len/3;
        for(int i= 0; i < l; i++){
            for(int x= hold; x< 3+hold; x++){
                char temp = str[x];
                //cout << hold << endl;
                if(x==0+hold && temp!='P'){
                    str[x] = 'P';
                    count++;
                }
                else if(x==1+hold && temp!= 'E'){
                    str[x] = 'E';
                    count++;
                }
                else if(x==2+hold && temp!= 'R'){
                    str[x] = 'R';
                    count++;
                }
            }
            hold+= 3;
        }
    }
    cout << count;
}