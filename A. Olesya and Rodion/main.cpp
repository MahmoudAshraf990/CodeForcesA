#include<iostream>


using namespace std;

int main(){
    int n, t;
    cin>>n>>t;
    if((n == 1 && t == 10)){
        cout<<-1<<endl;
        return 0;
    }
    int numOfZeros = n-1;
    cout<<t;
    while(numOfZeros != 0 && t != 10){
        cout<<0;
        numOfZeros--;
    }
    while(numOfZeros > 1 && t == 10){
        cout<<0;
        numOfZeros--;
    }
    return 0;

}

