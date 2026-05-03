#include<bits/stdc++.h>

#define ll long long

using namespace std;

int main(){
    ll n;
    ll pos;
    cin>>n;
    vector<bool> v(n);

    for(int i =0 ;i< n-1;i++){
        cin>>pos;
        v[pos-1] = true;
    }

    for(int i=0;i<n;i++){
        if(v[i] == 0){
            cout<<(i+1)<< '\n';
            break;
        }
    }
   return 0;
}
