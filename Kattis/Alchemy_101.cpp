#include <bits/stdc++.h>
using namespace std;

int N;

int main() {
    cin >> N;
    while (N--) {
        int x; cin >> x;
        int len = (int)(log2(x) + 1);
        vector<int> bits(len, 0);
        for (int i = 1; i <= x; ++i) {
            for (int j = 0; j < len; ++j) {
                bool b = (i & (1 << j)) > 0;
                bits[j] ^= b;
            }
        }
        int need = 0;
        for (int i = 0; i < len; ++i) {
            bool b1 = (x & (1 << i)) > 0;
            if (b1 ^ bits[i]) {
                need |= (1 << i);
            }
        }
        if (need == 0) {
            cout << x << endl;
            for (int i = 1; i <= x; ++i) {
                cout << i << " ";
            }
        } else if (need <= x) {
            cout << x - 1 << endl;
            for (int i = 1; i <= x; ++i) {
                if (i == need) continue;
                cout << i << " ";
            }
        } else {
            cout << x - 2 << endl;
            int r1 = 1 << (len - 1);
            int r2 = need - r1;
            for (int i = 1; i <= x; ++i) {
                if ( i == r1 || i == r2) {
                    continue;
                }
                cout << i << " ";
            }
        }
        cout << endl;
    }
}
