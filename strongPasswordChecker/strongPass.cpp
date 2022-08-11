#include<iostream>


using namespace std;


bool strongPasswordCheckerII(string password) {
    if(password.size() < 8)
        return false;
    bool lower = false, upper = false, special = false, number = false;
    for(int i=0; i<password.size(); i++){
        if((i+1)<password.size() && password[i] == password[i+1])
            return true;
        else if(password[i] >= 'a' && password[i]<='z')
            lower = true;
        else if(password[i] >= 'A' && password[i]<='Z')
            upper = true;
        else if(password[i] >= '0' && password[i]<='9')
            number = true;
        else if(password[i] >= '!' && password[i]<='+')
            special = true;
    }
    return (lower && upper && number && special) ? true : false;
}


int main(){
    strongPasswordCheckerII("IloveLe3tcode");
    return 0;
}

