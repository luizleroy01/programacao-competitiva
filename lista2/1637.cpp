//Removing digits - Luiz eduardo Leroy Souza
#include<iostream>
#include<vector>
using namespace std;

const int INF = 1e9;

int main() {

    int n;
    cin >> n;

    vector<int> dp(n + 1, INF);
    dp[0] = 0;

    for (int i = 1; i <= n; i++) {
        int x = i;
        while (x > 0) {
            int d = x % 10;
            x /= 10;

            if (d != 0) {
                dp[i] = min(dp[i], dp[i - d] + 1);
            }
        }
    }

    cout << dp[n] << endl;
    return 0;
}