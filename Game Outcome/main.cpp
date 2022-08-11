#include<iostream>
#include<vector>

using namespace std;


int sumOfRow(vector<int>&nums){
    int res=0;
    for(int num:nums)
        res += num;
    return res;
}


int sumOfCol(vector<vector<int>> &mat, int &col){
    int result = 0;
    for(int i=0; i<mat.size(); i++)
        result += mat[i][col];
    return result;
}



int main(){
    int n=0;
    cin>>n;
    vector<vector<int>> game(n, vector<int> (n,0));
    int temp;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>temp;
            game[i][j] = temp;
        }
    }
    int result = 0;
    for(int row=0; row<n; row++){
        int sum_of_row = sumOfRow(game[row]);
        for(int col=0; col<n; col++){
            if(sum_of_row < sumOfCol(game, col)){
                result++;
            }
        }
    }
    cout<<result<<endl;

}

