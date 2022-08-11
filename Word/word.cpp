#include<iostream>
#include<string>

using namespace std;

void get_num_of_lower_and_upper(string &word, int &upp, int &lower){
    for(char c:word){
        if(c >= 'A' && c <= 'Z')
            upp++;
        else
            lower++;
    }
}

int main(){

    string word="";
    cin>> word;
    int low = 0;
    int upper = 0;
    get_num_of_lower_and_upper(word, low, upper);

    if(low > upper || low == upper){
        for(int i=0; i<word.size(); i++){
            if(word[i] >= 'A' && word[i] <= 'Z')
                word[i] += 32;
        }
    }
    else{
        for(int i=0; i<word.size(); i++){
            if(word[i] >= 'a' && word[i] <= 'a')
                word[i] -= 32;
        }
    }
    cout<<word<<endl;

}

