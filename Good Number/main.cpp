#include <iostream>
#include<map>
#include<vector>

using namespace std;


bool checkNumber(int num, int k, map<int, int> digits){
    int rem = -1;
    while(num != 0){
        rem = num%10;
        digits[num]--;
        num /= 10;
       // count--;
    }
    return (digits.size() == 0) ? true : false;
}

int main(){

    int n=0, k=0;
    cin>>n>>k;
    vector<int> nums(n, 0); int i=0;
    while(n != 0){
        cin>>nums[i];
        i++;
        n--;
    }
    int result = 0; map<int, int> freq;
    for(int i=0; i<= k; i++)
        freq[i]++;
    
    for(int num:nums){
        if(checkNumber(num, k, freq))
            result++;
    }
    cout<<result<<endl;

}