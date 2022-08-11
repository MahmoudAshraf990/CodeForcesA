#include<iostream>
//#include<vector>


using namespace std;


int main(){

    int n,x;
    cin>>n>>x;
    int sum =0, temp= 0;
    while(n != 0){
        cin>>temp;
        sum += temp;
        n--; 
    }
    int cards = 0; sum = abs(sum);
    while(sum > 0){
        sum -=x;
        cards++;
    }
    cout<<cards<<endl;
}