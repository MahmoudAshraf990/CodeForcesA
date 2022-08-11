#include<iostream>

using namespace std;

int main(){
    int d1, d2, d3;
    cin>>d1>>d2>>d3;
    int firtsProb = (d1*2 + d2*2);
    int secondProb = (d1 + d3) + d2;
    if(firtsProb < secondProb){
        cout<<firtsProb<<endl;
    }
    else{
        cout<<secondProb<<endl;
    }
}

