#include<iostream>
#include<map>



using namespace std;

int main(){
    int no_of_lines =0;
    cin>>no_of_lines;
    map<string, int> goals;
    string temp;
    for(int i=0; i<no_of_lines; i++){
        cin>>temp;
        goals[temp]++;
    }
    string result;
    int max = 0;
    for(auto it:goals){
        if(it.second > max){
            result = it.first;
            max = it.second;
        }
    }
    cout<<result<<endl;

}
