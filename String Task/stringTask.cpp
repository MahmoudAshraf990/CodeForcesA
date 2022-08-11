#include<iostream>
#include<map>

using namespace std;


string petyaTask(string &input, map<char, char> &vowles){
    string result = "";
    for(int i=0; i<input.size(); i++){
        if(vowles[input[i]] == '1')
            continue;
        result += '.';
        if(input[i] >= 'A' && input[i] <= 'Z')
            input[i] = input[i]+32;
        result += input[i];
    }
    return result;
}

int main(){
    string userInput = "";
    cin>>userInput;
    map<char, char> vowles;
    vowles['a'] = '1';
    vowles['e'] = '1';
    vowles['o'] = '1';
    vowles['u'] = '1';
    vowles['y'] = '1';
    vowles['i'] = '1';
    vowles['A'] = '1';
    vowles['E'] = '1';
    vowles['O'] = '1';
    vowles['U'] = '1';
    vowles['Y'] = '1';
    vowles['I'] = '1';
    cout<<petyaTask(userInput, vowles)<<endl;
}


