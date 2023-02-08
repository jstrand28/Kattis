#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int getWhite(string str, int len){
    double count= 0;
    for(int i=0; i<len; i++){
        if(str[i] == '_'){
            count++;
        }
    }
    return count;
}

int getCapital(string str, int len){
    double count= 0;
    for(int i=0; i<len; i++){
        char temp = str[i];
        if(int(temp) >= 65 && int(temp) <= 90){
            count++;
        }
    }
    return count;
}

int getLower(string str, int len){
    double count= 0;
    for(int i=0; i<len; i++){
        char temp = str[i];
        if(int(temp) >= 97 && int(temp) <= 122){
            count++;
        }
    }
    return count;
}

int getSymbols(string str, int len){
    double count= 0;
    for(int i=0; i<len; i++){
        char temp = str[i];
        int trig1= 0, trig2= 0, trig3= 0;
        if(int(temp) > 95 && int(temp) < 97){
            count++;
        }
        else if(int(temp) < 95 && int(temp) > 90){
            count++;
        }
        else if(int(temp) > 122 || int(temp) < 65){
            count++;
        }
    }
    return count;
}

int main(){
    string str;
    cin >> str;
    double len = str.length();
    double n_w = getWhite(str, len);
    double n_l = getLower(str, len);
    double n_c = getCapital(str, len);
    double n_s = getSymbols(str, len);
    cout << fixed << setprecision(16) << n_w/len << endl << n_l/len << endl << n_c/len << endl << n_s/len << endl;
}