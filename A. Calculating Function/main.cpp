#include<iostream>
#include<cmath>
using namespace std;

int main(){
    long long n = 0;
    cin>>n;
    if(n%2 == 0){
        int num = n/2;
        long long sumOfEvens = (num)*(num+1);
        long long sumOfOdds = pow(num, 2);
        sumOfOdds *= -1;
        cout<<sumOfEvens+sumOfOdds<<endl;
    }
    else{
        int num = n/2;
        long long sumOfEvens = (num)*(num+1);
        long long sumOfOdds = pow(num+1, 2);
        sumOfOdds *= -1;
        cout<<sumOfEvens+sumOfOdds<<endl;
    }
}



