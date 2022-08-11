#include<iostream>


using namespace std;


int main(){

    int num = 0;
    cin>>num;
    string stones = "";
    cin>> stones;
    int result = 0;
    for(int i=1; i<stones.size(); i++){
        if(stones[i] == stones[i-1])
            result++;
    }
    cout<<result<<endl;

}