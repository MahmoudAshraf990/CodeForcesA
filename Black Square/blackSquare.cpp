#include<iostream>
#include<map>

using namespace std;

int main(){
    map<char, int> calories;

    int a = 0;
    for(char i='1'; i<='4'; i++){
        cin>>a;
        calories[i] = a;
    }
    string s = "";
    cin>>s;
    int result =0;
    for(char c : s){
        result += calories[c];
    }
    cout<<result<<endl;
}


    