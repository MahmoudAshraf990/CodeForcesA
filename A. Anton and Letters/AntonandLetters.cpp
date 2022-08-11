#include<iostream>
#include<map>
#include<string>
using namespace std;


int freqOfLetters(string &set){
    map<char, int> freq;
    int result = 0;
    for(int i=0; i<set.size(); i++){
        if(set[i] == ' ' || set[i] == ',' || set[i] == '{' || set[i] == '}')
            continue;
        if(!freq[set[i]])
            freq[set[i]]++;
    }
    return freq.size();
}


int main(){
    string st = "";
    cin>>st;
    freqOfLetters(st);
    return 0;
}
