#include <bits/stdc++.h>
using namespace std;

void generate(vector<long long>& nums, vector<long long>& sums, int start, int end, long long sum) {
    if (start == end) {
        sums.push_back(sum);
        return;
    }

    generate(nums, sums, start + 1, end, sum,);
    generate(nums, sums, start + 1, end, sum + nums[start]);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    long long x;
    cin >> n >> x;

    vector<long long> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int mid = n / 2;

    vector<long long> left, right;

    generate(nums, left, 0, mid, 0);
    generate(nums, right, mid, n, 0);

    sort(right.begin(), right.end());

    long long ans = 0;

    for (long long s : left) {
        auto l = lower_bound(right.begin(), right.end(), x - s);
        auto r = upper_bound(right.begin(), right.end(), x - s);
        ans += r - l;
    }

    cout << ans << "\n";
}