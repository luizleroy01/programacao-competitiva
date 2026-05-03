#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<long long> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    long long currentSum = nums[0];
    long long maxSum = nums[0];

    for (int i = 1; i < n; i++) {
        currentSum = max(nums[i], currentSum + nums[i]);
        maxSum = max(maxSum, currentSum);
    }

    cout << maxSum << "\n";
    return 0;
}