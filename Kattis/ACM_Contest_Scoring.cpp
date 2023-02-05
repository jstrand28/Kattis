#include <iostream>
#include <bits/stdc++.h>
#include <string>

#define PI 3.1415926

using namespace std;

int getNum(char x){
    int y = 0;
    y = int(x - '0');
    return y;
}

int main() {
    int m = 0;
    int temp_pen, final_time=0, cor = 0;
    char p;
    int i = 0;
    char arr[100];
    int arr_n[100] = {0};
    string str;
    while(m != -1){
        cin >> m;
        if(m == -1){
            break;
        }
        cin >> p;
        int trig = 0;
        getline(cin, str);
        if(str == " right"){
            temp_pen = 0;
            final_time += m;
            cor++;
        }
        else if (str == " wrong"){
            temp_pen = 20;
        }
        for(int j = 0; j <= i; j++){
            if(arr[j] == p){
                arr_n[j] += temp_pen;
                if(str == " right"){
                    final_time += arr_n[j];
                }
                trig = 1;
            }
        }
        if(trig == 0){
            arr[i] = p;
            arr_n[i] = temp_pen;
            i++;
        }
        
    }
    cout << cor << ' ' << final_time;
    return 0;
}