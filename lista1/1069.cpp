//Exercício Repetitions - Luiz Eduardo Leroy Souza(20213002126)
#include<iostream>
#include<string>

using namespace std;

int main(){
    string word;

    cin>>word;
    int maxSubstring = 1;
    int major = 0;

    for(size_t i = 0; i < word.size(); i++){
        if(word[i] != word[i-1]){
            if(maxSubstring > major) major = maxSubstring;
            maxSubstring = 1;
        }else{
            maxSubstring++;
        }
    }

    if(major > maxSubstring) cout<<major<<endl;
    else cout<<maxSubstring<<endl;
}