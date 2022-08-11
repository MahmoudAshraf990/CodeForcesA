#include<iostream>

using namespace std;

int main(){
    int numOfFriends, height;
    cin>>numOfFriends>>height;
    int result = 0;
    int personHeight = 0;
    while(numOfFriends != 0){
        cin>>personHeight;
        if(personHeight > height)
            result +=2;
        else{
            result++;
        }
        numOfFriends--;
    }
    cout<<result<<endl;

}

