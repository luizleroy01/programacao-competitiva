#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;

    cin>>n;

    vector<long long> numbers(n);

    for(int i =0;i< n;i++){
        cin>>numbers[i];
    }

    set<long long> distincts;

    for(long long x: numbers){
        distincts.insert(x);
    }

    cout<< distincts.size() <<'\n';
}