#include<iostream>


using namespace std;

int main(){
    int n=0;
    cin>>n;
    bool flag = false;
    string result = "I hate";
    if(n == 1){
        result += " it";
        cout<<result<<endl;
        return 0;
    }
    else{
        result += " that";
        n--;
        flag = true;
    }
   
    while(n > 1){
        if(flag && n != 1){
            result += " I love that";
            flag = false;
        }
        else if(!flag && n != 1){
            result += " I hate that";
            flag = true;
        }
        n--;
    }
    if(flag){
        result += " I love it";
    }
    else{
        result += " I hate it";
    }
    cout<<result<<endl;
}

