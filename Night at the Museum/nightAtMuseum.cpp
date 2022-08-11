#include<iostream> 
#include<algorithm>
using namespace std;



int main(){
    
    string s = "";
    cin >> s;
    int start = 0, pointer = 0, clock=0, counter=0;
    int result = 0;
    for(int i=0; i<s.size(); i++){
        pointer = s[i]-97;
        clock = abs(start - pointer);
        counter = 26-clock;
        result += min(clock, counter);
        start = pointer;
    }
    cout<<result<<endl;

}