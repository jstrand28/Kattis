#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int n= 0;
    int b= 0;
    double p= 0;
    double diff= 0;
    double BPM= 0, min_BPM= 0, max_BPM= 0;
    cin >> n;
    for(int i= 0; i< n; i++){
        cin >> b;
        cin >> p;
        diff= 60/p;
        BPM= (60*b)/p;
        min_BPM= BPM-diff;
        max_BPM= BPM+diff;
        cout << fixed << setprecision(4);
        cout << min_BPM << ' ' << BPM << ' ' << max_BPM << endl;
    }
}