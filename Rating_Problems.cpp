#include <iostream>
#include <iomanip>

using namespace std;

/*
    Inputs:

    Outputs:

*/

float r_v = 0;
float l_v = 0;

int main(){
    float n = 0;
    float k = 0;
    float r = 0;
    float total = 0;
    
    
    cin >> n;  // number of judges
    cin >> k;  // number who voted

    for(int i=0;i<k;i++){
        cin >> r;  // voters values
        total += r;  // total from people who voted
    }
    float no_v = abs(n - k); // no vote value
    if(no_v != 0){
        r_v = (total + no_v * -3)/n; // right print value or min value
        l_v = (total + no_v * 3)/n;  // left print value or max value
    }
    else{
        r_v = total/n;
        l_v = total/n;
    }
    
    cout << r_v;
    cout << " ";
    cout << l_v;
}
