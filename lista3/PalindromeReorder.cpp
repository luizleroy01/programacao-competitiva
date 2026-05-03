#include <bits/stdc++.h>

using namespace std;

int main() {

    string s;
    cin >> s;

    int freq[26] = {0};

    for(char c : s){
        freq[c - 'A']++;
    }

    int oddCount = 0;

    for(int i = 0; i < 26; i++){
        if(freq[i] % 2 != 0){
            oddCount++;
        }
    }

    if(oddCount > 1){
        cout << "NO SOLUTION" <<'\n';
        return 0;
    }

    string start = "";
    string middle = "";

    for(int i = 0; i < 26; i++){

        char c = 'A' + i;

        start += string(freq[i] / 2, c);

        if(freq[i] % 2 != 0){
            middle += c;
        }
    }

    string end = start;
reverse(end.begin(), end.end());

cout << start + middle + end <<'\n';
}