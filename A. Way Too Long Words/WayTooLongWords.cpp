#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    int numberOfWords = 0;
    string word = "";

    cin>> numberOfWords;
   vector<string> output;

    for(int i=1; i<=numberOfWords; i++){
        cin>>word;
        if(word.size() <= 10)
            output.push_back(word);
        else{
            string temp = word[0]+to_string(word.size()-2)+word[word.size()-1];
            output.push_back(temp);
        }
    }

    for(string st:output)
        cout<<st<<endl;


    return 0;


}

