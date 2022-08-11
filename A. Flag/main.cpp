#include<iostream>
#include<vector>


using namespace std;

bool checkRow(string & str){
    char start = str[0];
    for(int i=1; i<str.size(); i++){
        if(str[i] != start)
            return false;
    }
    return true;
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<string> colors;
    string temp;
    for(int i=0; i<n; i++){
        cin>>temp;
        colors.push_back(temp);
        if( (i > 0 && colors[i] == colors[i-1]) || !checkRow(temp)){
            cout<<"NO"<<endl;
            return 0;
        }
        
    }
    cout<<"YES"<<endl;
}

