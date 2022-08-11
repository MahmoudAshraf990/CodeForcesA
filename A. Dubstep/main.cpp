#include<iostream>
#include <sstream>
#include<string>

using namespace std;

void deleteSpaces(string &res){
    stringstream s(res);
    string word;
    int count = 0;
    res = "";
    while (s >> word)
        res += (word + ' ');
    
}

// running on 19 tests
int main(){

    string str = "";
    cin>>str;
    string result = "";
    string dubstep = "WUB", temp = "";
    for(int i=0; i<str.size(); i++){
        if((str[i] == 'W' && str[i+1] == 'U') || (str[i] == 'U' && str[i+1] == 'B'))
            continue;
        else if(str[i] =='B' && str[i-1] == 'U'){
            result += " ";
        }
        else
            result += str[i];
    }
   deleteSpaces(result);
   result.pop_back();
   cout<<result<<endl;

}


