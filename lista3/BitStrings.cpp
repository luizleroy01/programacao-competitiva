#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    long long result = 1;
    long long mod = 1e9 + 7;

    for (int i = 0; i < n; i++) {
        result = (result * 2) % mod;
    }

    cout << result << '\n';

    return 0;
}