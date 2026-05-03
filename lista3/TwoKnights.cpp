#include<bits/stdc++.h>

using namespace std;

long long int calculaParaK(long long int k){
    return ((k * k * k * k) - (9 * (k * k)) + (24 * k) - 16)/2;
}

int main(){
    int k;
    cin>>k;

    for(int i = 0 ; i < k;i++){
        cout<<calculaParaK(i+1)<<'\n';
    }
}