#include<iostream>
#include<vector> 
using namespace std;


bool checkSeats(string & str){
    if(str[0]  == 'O' && str[1]  == 'O'){
        str[0] = '+';
        str[1] = '+';
        return true;
    }
    else if(str[3] == 'O' && str[4] == 'O'){
        str[3] = '+';
        str[4] = '+';
        return true;
    }
    else{
        return false;
    }
}

int main(){

    int n = 0;
    cin>>n;
    string temp = "", result = "NO";
   // vector<vector<string>> output;
    vector<string>seatRow;
    bool flag = false;
    while(n != 0){
        cin>>temp;
        if(!flag && checkSeats(temp)){
            result = "YES";
            seatRow.push_back(temp);
            flag = true;
        }
        else{
            seatRow.push_back(temp);
        }
        n--;
    }
    cout<<result<<endl;
    if(result == "YES"){
        for(string c:seatRow){
            cout<<c<<endl;
        }
    }
    
}
