//Array Description - Luiz eduardo Leroy Souza
#include<iostream>
#include<vector>
using namespace std;

const int MOD = 1e9 + 7;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> x(n);
    for (int i= 0; i < n; i++){
        cin >> x[i];   
    } 

    vector<int> dp(m + 2, 0), new_dp(m + 2, 0);

    if (x[0] == 0) {
        for (int v = 1; v <= m; v++) dp[v] = 1;
    } else {
        dp[x[0]] = 1;
    }

    for (int i = 1; i < n; i++) {
        fill(new_dp.begin(), new_dp.end(), 0);

        for (int v = 1; v <= m; v++) {
            if (x[i] != 0 && x[i] != v) continue;

            new_dp[v] = dp[v];
            if (v > 1) new_dp[v] = (new_dp[v] + dp[v - 1]) % MOD;
            if (v < m) new_dp[v] = (new_dp[v] + dp[v + 1]) % MOD;
        }

        dp = new_dp;
    }

    int ans = 0;
    for (int v = 1; v <= m; v++) {
        ans = (ans + dp[v]) % MOD;
    }

    cout << ans << endl;
    return 0;
}