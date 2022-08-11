#include<iostream>

using namespace std;
 
int main(){
    int n =0;
    cin>>n;
    int mischka =0, chris=0;
    int temp1=0, temp2=0;
    for(int i=0; i<n; i++){
        cin>>temp1>>temp2;
        if(temp1 > temp2)
            mischka++;
        else if(temp2 > temp1){
            chris++;
        }
    }
    if(mischka > chris){
        cout<<"Mishka"<<endl;
    }
    else if(chris > mischka){
        cout<<"Chris"<<endl;
    }
    else
    {
        cout<<"Friendship is magic!^^"<<endl;
    }
}

