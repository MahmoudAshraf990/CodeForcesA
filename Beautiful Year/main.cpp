#include<iostream>
#include<map>


using namespace std;

bool checkDistinct(int year){
    map<int, int> nums;
    while(year != 0){
        if(nums[year % 10])
            return false;
        nums[year % 10]++;
        year /= 10;
    }
    return true;
}

int main(){
    int years = 0;
    cin>>years;
    years++;
    while(!checkDistinct(years)){
        years++;
    }
    cout<<years<<endl;
}