#include <iostream>
#include <string>

using namespace std;

int main(){
    string eye;
    int left= 0, right= 0, trig= 0;
    getline(cin, eye);
    int len = eye.length();
    for(int i= 0; i< len; i++){
        char temp= eye[i];
        if(temp == '(' || temp == ')'){
            trig= 1;
        }
        else if(trig == 0 && (temp!= ')' || temp!= '('))
        {
            left++;
        }
        else if(trig == 1 && (temp!= ')' || temp!= '('))
        {
            right++;
        }
    }
    if(right == left){
        cout << "correct";
    }
    else{
        cout << "fix";
    }
}