#include<iostream>
#include<vector>


using namespace std;

int main(){
    int n, k;
    cin>>n>>k;
    int score =0;
    vector<int> scores;
    int k_thValue =0;
    bool flag = false;
    for(int i=0; i<n; i++){
        if(k == 1 && !flag){
            cin>>k_thValue;
            scores.push_back(k_thValue);
            flag = true;
            continue;
        }
        cin>>score;
        scores.push_back(score);
        k--;
    }
    int result = 0;
    for(int num:scores){
        if(num >= k_thValue && num != 0){
            result++;
        }
    }
    cout<<result<<endl;

}
