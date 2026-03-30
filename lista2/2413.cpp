//Counting Towers - Luiz eduardo Leroy Souza
#include<iostream>
#include<vector>

using namespace std;

const int MOD = 1e9 + 7;
const int MAXN = 1e6 + 5;

int main() {
    int t;
    cin >> t;

    vector<int> queries(t);
    int max_n = 0;

    for (int i = 0; i < t; i++) {
        cin >> queries[i];
        max_n = max(max_n, queries[i]);
    }

    vector<vector<long long int>> dp(max_n + 1, vector<long long int>(2));

    dp[1][0] = 1;
    dp[1][1] = 1;

    for (int i = 2; i <= max_n; i++) {
        dp[i][0] = (dp[i-1][0] * 2 + dp[i-1][1]) % MOD;
        dp[i][1] = (dp[i-1][0] + dp[i-1][1] * 4) % MOD;
    }

    for (int n : queries) {
        cout << (dp[n][0] + dp[n][1]) % MOD << endl;
    }

    return 0;
}