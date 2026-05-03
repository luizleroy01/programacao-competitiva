#include<bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int n = s.length();
    vector<int> freq(26, 0);
    for (char c : s) {
        freq[c - 'A']++;
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] > (n + 1) / 2) {
            cout << -1 << endl;
            return 0;
        }
    }

    string res = "";
    char last_char = '#';

    for (int i = 0; i < n; i++) {
        bool found = false;
        int remaining = n - i;

        for (int j = 0; j < 26; j++) {
            if (freq[j] > 0 && (char)('A' + j) != last_char) {
                freq[j]--;
                bool possible = true;
                for (int k = 0; k < 26; k++) {
                    if (freq[k] > remaining / 2) {
                        possible = false;
                        break;
                    }
                }
                if (possible) {
                    res += (char)('A' + j);
                    last_char = (char)('A' + j);
                    found = true;
                    break;
                }
                
                freq[j]++;
            }
        }

        if (!found) {
            cout << -1 << endl;
            return 0;
        }
    }

    cout << res << endl;

    return 0;
}