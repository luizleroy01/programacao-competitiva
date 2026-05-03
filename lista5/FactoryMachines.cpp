#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long t;
    cin >> n >> t;

    vector<long long> k(n);
    for (int i = 0; i < n; i++) cin >> k[i];

    long long left = 0;
    long long right = *min_element(k.begin(), k.end()) * t;
    long long ans = right;

    while (left <= right) {
        long long mid = left + (right - left) / 2;

        long long total = 0;

        for (int i = 0; i < n; i++) {
            total += mid / k[i];

            if (total >= t) break;
        }

        if (total >= t) {
            ans = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    cout << ans << "\n";
}