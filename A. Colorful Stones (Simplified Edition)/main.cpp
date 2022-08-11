#include<iostream>

using namespace std; 

int main(){
    string s, t;
    cin>>s;
    cin>>t;
    int position = 0;
    for(int i=0; i<t.size(); i++){
        if(t[i] == s[position]){
            position++;
        }
    }
    cout<<position+1<<endl;
}
