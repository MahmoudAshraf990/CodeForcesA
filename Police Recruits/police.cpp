#include<iostream>
#include<map>

using namespace std;

int main(){
    int events = 0;
    cin>> events;

    map<int, int> police;
    police[1] = 0;
    int crimeOrHiring = 0;
    int result = 0;
    for(int i=1; i<= events; i++){
        cin>>crimeOrHiring;
        if(crimeOrHiring == -1 && !police[1]){
            result++;
        }
        else if(crimeOrHiring == -1 && police[1]>0){
            police[1]--;
        }
        else{
            police[1] += crimeOrHiring;
        }
    }
    cout<<result<<endl;


}

