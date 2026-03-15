//Exercício Increasing array - Luiz Eduardo leroy Souza
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    long long int diff = 0;
    cin>>n;
    vector<int> v(n);

    long long int movement = 0;

    for(int i =0;i< n;i++){
        cin>>v[i];
    }

    for(int i = 1;i< n;i++){
        if(v[i] < v[i - 1]){
            diff = v[i-1] - v[i];
            movement += diff;
            v[i] += diff;
        }
    }

    cout<<movement<<endl;
}