#include<iostream>
#include<set>

using namespace std;


int main(){
    int numOfLevels = 0;
    cin>>numOfLevels;
    set<int> allLevels;
    while(numOfLevels != 0){
        allLevels.insert(numOfLevels);
        numOfLevels--;
    }
    int XLevels = 0;
    cin>>XLevels;
    int levelPassed = 0;
    for(int i=0; i<XLevels; i++){
        cin>>levelPassed;
        allLevels.erase(levelPassed);
    }
    int YLevels = 0;
    cin>>YLevels;
    for(int j=0; j<YLevels; j++){
        cin>>levelPassed;
        allLevels.erase(levelPassed);
    }
    if(!allLevels.size())
        cout<<"I become the guy."<<endl;
    else
        cout<<"Oh, my keyboard!"<<endl;
    
    return 0;
}

