#include<iostream>
#include<string>
#include<map>

using namespace std;

string rearrange_sum(map<char,int>& chars){
    string result = "";

    for(auto it:chars){
        while(it.second != 0){
            result += it.first;
            result += '+';
            it.second--;
        }
    }
    result.pop_back();
    return result;
}

int main(){

    string formula = "";
    cin>>formula;
    map<char, int> numbers;
    for(char c:formula){
        if(c == '+')
            continue;
        numbers[c]++;
    }
    cout<<rearrange_sum(numbers)<<endl;
}
