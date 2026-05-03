#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;

    int total = 1 << n;

    for (int i = 0; i < total; i++) {
        int gray = i ^ (i >> 1);

        for (int j = n - 1; j >= 0; j--) {
            if ((gray >> j) & 1) cout << '1';
            else cout << '0';
        }
        cout << '\n';
    }

    return 0;
}