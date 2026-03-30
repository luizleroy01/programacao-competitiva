//Money Sums - Luiz Eduardo leroy Souza
#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> coins(n);
    for (int i = 0; i < n; i++) {
        cin >> coins[i];

    }
    
    int maxSum = 100000;

    vector<bool> dp(maxSum + 1, false);
    dp[0] = true;

    for (int c : coins) {
        for (int s = maxSum; s >= c; s--) {
            if (dp[s - c]) {
                dp[s] = true;
            }
        }
    }

    vector<int> result;

    for (int i = 1; i <= maxSum; i++) {
        if (dp[i]) result.push_back(i);
    }

    cout <<result.size() << endl;
    for (int s : result) {
        cout << s << " ";
    }
    cout << endl;

    return 0;
}