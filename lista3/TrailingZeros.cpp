#include <bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    if (!(cin >> n)) return 0;

    long long count = 0;
    
    while (n >= 5) {
        count += n / 5;
        n /= 5;
    }

    cout << count << '\n';

    return 0;
}