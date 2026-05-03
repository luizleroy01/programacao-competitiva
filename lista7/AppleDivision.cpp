#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> apples(n);
    long long total = 0;

    for (int i = 0; i < n; i++) {
        cin >> apples[i];
        total += apples[i];
    }

    long long ans = LLONG_MAX;

    for (int mask = 0; mask < (1 << n); mask++) {
        long long sum = 0;

        for (int i = 0; i < n; i++) {
            if (mask & (1 << i)) {
                sum += apples[i];
            }
        }

        long long diff = llabs(total - 2 * sum);
        ans = min(ans, diff);
    }

    cout << ans << endl;

    return 0;
}