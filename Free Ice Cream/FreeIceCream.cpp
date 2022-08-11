#include<iostream>
#include<string>

using namespace std;


int main(){

    int numOfPeople;
    long long numOfIceCream;
    cin>>numOfPeople>>numOfIceCream;

    int kidsDistress = 0;
    char temp;
    long long input = 0;
    while(numOfPeople > 0){
        cin>> temp;
        cin>> input;
        if(temp == '+'){
            numOfIceCream += input;
        }
        else{
            if(numOfIceCream < input)
                kidsDistress++;
            else{
                numOfIceCream -= input;
            }
        }
        numOfPeople--;
    }
    cout<< numOfIceCream << " " << kidsDistress;
}
