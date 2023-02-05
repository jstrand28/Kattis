#include <iostream>
#include <cmath>
#include <string>
#include <sstream>

using namespace std;

int main() {
    string str;
    int last_i = 0;
    int a, b;
    int count =0;
    int op=0;
    int des_op = 1;
    getline(cin, str);
    int len = str.length();
    //gets number of times operation to count should occur
    for(int i =0;i<len;i++){
        char temp = str[i];
        if(temp == ';'){
            des_op+=1;
        }
    }
    for(int i =0;i<len;i++){
        char temp = str[i];
        if(temp == '-' || temp == ';'){
            if(temp == '-'){
                op++;
                a = 0;
                b = 0;
                while(last_i < i){
                    temp = str[last_i];
                    //cout << temp << endl;
                    a += int(temp - '0');
                    //cout << "temp_A: " << a << ' ';
                    last_i++;
                    if(last_i < i){
                        a = a*10;
                    }
                }
               // cout << a << ' ';
                int k = i +1;
                while(temp != ';' && i < len){
                    i++;
                    temp = str[i];
                    //cout << "i: " << i << endl;
                    if(temp != ';' && i < len){
                        int temp_b = int(temp - '0');
                        //cout << "temp_b: " << temp_b << " ";
                        if(k != i){
                            b= b*10;
                            i++;
                        }
                        b+=temp_b;
                    }
                }
                //cout << b << " ";
                count += b-a +1;
                //cout << count << endl;
            }
            else{
                op++;
                count = count +1;
               // cout << count << endl;
                last_i = i +1;
            }
        }
    }
    if(des_op != op){
        op++;
        count+=1;
    }
    cout << count;
    return 0;
}
