//Exercício Two sets - Luiz Eduardo Leroy Souza
#include <iostream>
#include <vector>

using namespace std;

int main() {
    long long n;
    cin >> n;

    if (n % 4 != 0 && n % 4 != 3) {
        cout << "NO"<<endl;
        return 0;
    }

    cout << "YES"<<endl;

    vector<int> set1, set2;

    if (n % 4 == 0) {

        for (int i = 1; i <= n; i += 4) {
            set1.push_back(i);
            set1.push_back(i + 3);

            set2.push_back(i + 1);
            set2.push_back(i + 2);
        }

    } else {

        set1.push_back(1);
        set1.push_back(2);
        set2.push_back(3);

        for (int i = 4; i <= n; i += 4) {
            set1.push_back(i);
            set1.push_back(i + 3);

            set2.push_back(i + 1);
            set2.push_back(i + 2);
        }
    }

    cout << set1.size() << endl;
    for (int x : set1) cout << x << " ";
    cout << endl;

    cout << set2.size() << endl;
    for (int x : set2) cout << x << " ";
    return 0;
}