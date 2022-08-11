#include<iostream>
#include<set>

using namespace std;

int main(){
    string userName = "";
    cin>> userName;
    set<char> chars;
    for(char c:userName)
        chars.insert(c);
    
    if(chars.size() % 2 == 0)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;

}
