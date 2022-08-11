#include<iostream>
#include<map>


using namespace std;

int main(){
    int num = 4;
    map<int, int> colors;
    int color = 0;
    while(num != 0){
        cin>>color;
        colors[color]++;
        num--;
    }
    int result=0;
    for(auto col:colors){
        if(col.second > 1){
            result += col.second;
            result -= 1;
        }
    }
    cout<<result<<endl;

}



