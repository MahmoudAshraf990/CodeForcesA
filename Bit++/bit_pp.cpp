#include<iostream>


using namespace std; 

int main(){
    int intialNum = 0, numOfOpreations = 0;
    cin>>numOfOpreations;
    string operation = "";
    for(int i=1; i<=numOfOpreations; i++){
        cin>>operation;
        if(operation == "++X" || operation == "X++")
            intialNum++;
        else
            intialNum--;
    }
    cout<<intialNum<<endl;
    return 0;
}
