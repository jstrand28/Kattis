#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n = 0;
    int n_boxes_edge = 0;

    cin >> n;

    n_boxes_edge = pow(2, n) + 1;
    //cout << n_boxes_edge << endl;
    int final_n_edges = pow(n_boxes_edge, 2);
    cout << final_n_edges;
    return 0;
}
