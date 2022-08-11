#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n = 0;
    cin>>n;
    if(n == 1){
        cout<<1<<endl;
        return 0;
    }
    vector<vector<int>> matrix(n, vector<int>(n,1));
    for(int row =1; row<n; row++){
        for(int col = 1; col<n; col++){
            matrix[row][col] = (matrix[row-1][col]) + (matrix[row][col-1]);
        }
    }
    cout<<matrix[n-1][n-1]<<endl;

}

