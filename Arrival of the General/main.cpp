#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int minIndex(vector<int> &arr){
    int res = INT_MAX; int index=-1;
    for(int i=0; i<arr.size(); i++){
        if(arr[i] < res || (arr[i] == res && index < i)){
            res = arr[i];
            index = i;
        }
           
    }
    return index;
}

int maxIndex(vector<int> &arr){
    int res = INT_MIN; int index=INT_MAX;
    for(int i=0; i<arr.size(); i++){
        if(arr[i] > res || (arr[i] == res && index > i)){
            res = arr[i];
            index = i;
        }
           
    }
    return index;
}

int main(){
    int n=0; cin>>n; vector<int> soldiers; int soldier;
    while(n != 0){
        cin>>soldier;
        soldiers.push_back(soldier);
        n--;
    }
    int minIdx = minIndex(soldiers);
    int maxIdx = maxIndex(soldiers);
    minIdx = (soldiers.size())-minIdx;
    maxIdx = maxIdx-0;
    cout<<maxIdx+minIdx<<endl;
}

