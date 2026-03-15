//Coin Piles - Luiz Eduardo leroy Souza
#include <iostream>
using namespace std;

int main() {

    long long t;
    cin >> t;
    long long a, b;

    while (t > 0) {
        
        cin >> a >> b;

        if ((a + b) % 3 == 0 && (max(a, b) <= (2 * min(a, b)))) {
            cout << "YES"<<endl;
        } else {
            cout << "NO"<<endl;
        }
        t--;
    }
}