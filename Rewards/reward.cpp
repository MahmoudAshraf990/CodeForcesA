#include<iostream>

using namespace std;

int main(){

    int numofcups=0, numofmedals=0, numofshelves=0;
    int temp =0 ;
    for(int i=0; i<3; i++){
        cin>>temp;
        numofcups += temp;
    }
    temp = 0;
    for(int j=0; j<3; j++){
        cin>>temp;
        numofmedals += temp;
    }
    cin>>numofshelves;
    while(numofshelves != 0 && numofcups > 0){
        numofcups -= 5;
        numofshelves--;
    }
    while(numofshelves != 0 && numofmedals > 0){
        numofmedals -= 10;
        numofshelves--;
    }

    if((numofshelves > 0 ||  numofshelves == 0) && (!numofmedals ||  numofmedals < 0) && (!numofcups ||  numofcups < 0) ){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

