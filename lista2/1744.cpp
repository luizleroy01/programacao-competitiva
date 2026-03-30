//Edit Distance - Luiz eduardo Leroy Souza
#include<iostream>
#include<vector>
using namespace std;

const int INF = 1e9;

int main() {

    int a, b;
    cin >> a >> b;

    vector<vector<int>> dp(a + 1, vector<int>(b + 1, INF));

    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {

            if (i == j) {
                dp[i][j] = 0;
                continue;
            }

            for (int k = 1; k < i; k++) {
                dp[i][j] = min(dp[i][j], dp[k][j] + dp[i - k][j] + 1);
            }
            for (int k = 1; k < j; k++) {
                dp[i][j] = min(dp[i][j], dp[i][k] + dp[i][j - k] + 1);
            }
        }
    }

    cout << dp[a][b] << endl;
    return 0;
}