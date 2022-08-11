#include<iostream>

 using namespace std;

int main(){
    int n = 0;
    cin>>n;
    string games = "";
    cin>>games;
    int AntonWinners=0, DanikWinners = 0;
    for(char c:games){
        if(c == 'A')
            AntonWinners++;
        else
            DanikWinners++;
    }
    if(AntonWinners > DanikWinners){
        cout<<  "Anton"  <<endl;
    }
    else if(AntonWinners < DanikWinners){
        cout<<   "Danik"  << endl;
    }
    else{
        cout<<  "Friendship"  <<endl;
    }
}


