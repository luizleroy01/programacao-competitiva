//Exercício Distinct Numbers - Luiz Eduardo Leroy Souza
#include <iostream>
#include <set>

using namespace std;

int main(){
    long long int n,x;

    cin>>n;

    set<long long int> numbers;

    for(int i = 0;i<n;i++){
        cin>>x;
        numbers.insert(x);
    }

    cout << numbers.size() << endl;
}