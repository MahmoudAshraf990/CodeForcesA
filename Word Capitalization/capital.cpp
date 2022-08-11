#include<iostream>
using namespace std;

int main(){
    string result = "";
    cin >> result;
    if(result[0] >= 'a' && result[0] <= 'z'){
        result[0] = result[0]-32;
        cout<<result<<endl;
    }
    else{
        cout<<result<<endl;
    }
    return 0;
}
