#include<iostream>

using namespace std;

int main(){
    int n = 0;
    cin>>n;
    int noOfPeople=0, roomCapacity = 0;
    int result = 0;
    while(n != 0){
        cin>>noOfPeople>>roomCapacity;
        if((roomCapacity-noOfPeople) >= 2)
            result++;
        n--;
    }
    cout<<result<<endl;
}
