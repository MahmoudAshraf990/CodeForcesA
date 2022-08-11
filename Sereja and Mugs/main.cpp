#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,s, cupVol=0;
    cin>>n>>s;
    vector<int> nums;
    while(n != 0){
        cin>>cupVol;
        nums.push_back(cupVol);
        n--;
    }
    sort(nums.begin(), nums.end());
    for(int i=0; i<nums.size()-1; i++){
        s -= nums[i];
    }
    if(s < 0 )
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
}
