#include<iostream>
#include<vector>

using namespace std;

int sumFromLeft(vector<int> &arr, int st1, int st2){
    int res=0;
    for(int i=st1; i<st2; i++){
        res += arr[i];
    }
    return res;
}


int sumFromRight(vector<int> &arr, int st1, int st2){
    int res=0;
    for(int i=st2; i<arr.size(); i++){
        res += arr[i];
    }
    res += sumFromLeft(arr, 0, st1);
    return res;
}


int main(){
    int number_of_stations = 0;
    cin>>number_of_stations;
    vector<int> distances(number_of_stations, -1); int i=0;
    while(number_of_stations != 0){
        cin>>distances[i];
        number_of_stations--; i++;
    }

    int s=0, t=0;
    cin>>s>>t;
    if(s == t){
        cout<<0<<endl;
        return 0;
    }
    int dis1 = 0; int dis2 = 0;
    if(s < t){
         dis1 = sumFromLeft(distances, s-1, t-1);
         dis2 = sumFromRight(distances, s-1, t-1);
    }
    else{
        dis1 = sumFromLeft(distances, t-1, s-1);
        dis2 = sumFromRight(distances, t-1, s-1);
    }

    int res = (dis1 < dis2) ? dis1 : dis2;
    cout<<res<<endl;
}
