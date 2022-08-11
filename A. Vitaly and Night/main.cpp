#include<iostream>

using namespace std;


int main(){
    int n,m;
    cin>>n>>m;
    int window1, window2, result=0; 
    for(int row=0; row<n; row++){
        for(int i=0, j=1; j<m*2; j +=2, i += 2){
            cin>>window1>>window2;
            if(window1 == 1 || window2 == 1)
                result++;
        }
    }
    cout<<result<<endl;

}

