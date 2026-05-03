#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    long long int x,y;

    for(int i=0;i<t;i++){
        cin>>y>>x;

        if(y>=x){
            if(y % 2 == 0){
                cout<<(y * y) - x + 1<< '\n';
            }else{
                cout<<((y-1) * (y-1)) + x<< '\n';
            }
        }else{
            if(x % 2 != 0){
                cout<<(x * x) - y + 1<< '\n';
            }else{
                cout<<((x-1) * (x-1)) + y<< '\n';
            }
        }
    }
}