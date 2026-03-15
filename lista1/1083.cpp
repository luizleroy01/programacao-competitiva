//Exercício Missing Number - Luiz Eduardo Leroy Souza(20213002126)
#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    int pos;
    cin>>n;
    vector<bool> v(n);

    for(int i =0 ;i< n-1;i++){
        cin>>pos;
        v[pos-1] = true;
    }

    for(int i=0;i<n;i++){
        if(v[i] == 0){
            cout<<(i+1)<<endl;
            break;
        }
    }
   return 0;
}
