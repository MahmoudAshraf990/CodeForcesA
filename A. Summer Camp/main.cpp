#include<iostream>
#include<string>
using namespace std;

int main(){

    int n = 0;
    cin>>n;

    string sufix = "";
    string temp = "";
    for(int i=1; i<=n; i++){
        temp = to_string(i);
        sufix += temp;
        temp = "";
    }
    cout<<sufix[n-1]<<endl;
}   
