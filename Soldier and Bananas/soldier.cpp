#include<iostream>

using namespace std;

int main(){
    int intialDoller = 0, numOfDollers = 0, numOfBananas=0;

    cin >> intialDoller >> numOfDollers >> numOfBananas;
    int counter = 1, sum = 0;
    while(counter <= numOfBananas){
        sum += (counter * intialDoller);
        counter++;
    }
    if((sum-numOfDollers) >= 0){
        cout<<sum-numOfDollers<<endl;
    }
    else
        cout << 0 <<endl;

    return 0;
    
}