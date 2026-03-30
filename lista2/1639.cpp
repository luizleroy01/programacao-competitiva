//Edit Distance - Luiz eduardo Leroy Souza
#include <bits/stdc++.h>

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;

    int n = a.size();
    int m = b.size();

    vector<int> prev(m + 1), curr(m + 1);

    for (int j = 0; j <= m; j++) {
        prev[j] = j;
    }

    for (int i = 1; i <= n; i++) {
        curr[0] = i;

        for (int j = 1; j <= m; j++) {
            if (a[i - 1] == b[j - 1]) {
                curr[j] = prev[j - 1];
            } else {
                curr[j] = 1 + min({prev[j], curr[j - 1], prev[j - 1] });
            }
        }

        prev = curr;
    }

    cout << prev[m] << endl;
    return 0;
}