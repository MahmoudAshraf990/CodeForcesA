#include<iostream>


using namespace std;



int main(){
    int n = 0;
    cin>>n;
    int redRating = 2400, orangeRating = 2200;
    int rateBefore =0, rateAfter = 0;
    string userName = "";
    for(;n>0; n--){
        cin>>userName;
        cin>>rateBefore>>rateAfter;
        if(rateBefore >= redRating && rateAfter > rateBefore){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;


}
