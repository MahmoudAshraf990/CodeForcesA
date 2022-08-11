#include<iostream>
#include<vector>
using namespace std;

void fillVector( string &str, int n, int start){
    for(int i=0; i<n; i++){
        if(i == start){
            str.push_back('D');
        }else{
            str.push_back('*');
        }
    }
}

int main(){
    int n=0;
    cin>>n;
    int Char = n/2;
    int idx1 = Char-1;
    int idx2 = Char+1;
    string startStr = "";
    fillVector(startStr, n, Char);
    cout<<startStr<<endl;
    for(;idx1>=0 && idx2 < n; idx1--, idx2++){
        startStr[idx1] = 'D';
        startStr[idx2] = 'D';
        cout<<startStr<<endl;
    }
    idx1 = 0;
    idx2 = n-1;
    for(;idx1<Char && idx2 > Char; idx1++, idx2--){
        startStr[idx1] = '*';
        startStr[idx2] = '*';
        cout<<startStr<<endl;
    }

}



