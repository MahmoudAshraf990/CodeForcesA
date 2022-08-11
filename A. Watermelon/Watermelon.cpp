#include<iostream>

using namespace std;


int main(){
    int weight = 0;
    cin>> weight;
    if(weight%2 == 0){
        int reminder = weight/2;
        if(reminder%2 == 0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl; 
    }
    else{
        cout<<"NO"<<endl; 
    }
    return 0;

}