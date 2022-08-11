#include<iostream>
#include<map>


using namespace std;

int main(){
    int numOfGems = 0;
    cin>>numOfGems;

    map<string, string> Gems;
    Gems["purple"] = "Power";
    Gems["green"] = "Time";
    Gems["blue"] = "Space";
    Gems["orange"] = "Soul";
    Gems["red"] = "Reality";
    Gems["yellow"] = "Mind";
    string temp = "";
    for(int i=0; i<numOfGems; i++){
        cin>>temp;
        Gems.erase(temp);
    }
    cout<<Gems.size()<<endl;
    for(auto it: Gems){
        cout<<it.second<<endl;
    }
    return 0;
}

