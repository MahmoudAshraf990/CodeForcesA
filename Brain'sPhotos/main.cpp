#include<iostream>
#include<map>


using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    map<char, char> BlackAndWhite;
    BlackAndWhite['W'] = '1';
    BlackAndWhite['B'] = '1';
    BlackAndWhite['G'] = '1';
    char temp;
    for(int i=0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin>> temp;
            if(!BlackAndWhite[temp]){
                cout<<"#Color"<<endl;
                return 0;
            }
        }
    }
    cout<<"#Black&White"<<endl;
    return 0;
}

