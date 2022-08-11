#include<iostream>
#include<vector>

#include<algorithm>
using namespace std;

// int min(vector<int> &arr){
//     int res = 1000;
//     for(int num :arr){
//         if(num < res)
//             res = num;
//     }
//     return res;
// }


// int min(vector<int> &arr){
//     int res = -1;
//     for(int num :arr){
//         if(num > res)
//             res = num;
//     }
//     return res;
// }



int main(){
    int numOfFriends = 3;
    vector<int> distance;
    int dis=0;
    while(numOfFriends != 0){
        cin>>dis;
        distance.push_back(dis);
        numOfFriends--;
    }
    sort(distance.begin(), distance.end());
    int min = distance[0], max = distance[2];
    int result = abs(distance[1]-min) + abs(max - distance[1]);
    cout<<result<<endl;
}

