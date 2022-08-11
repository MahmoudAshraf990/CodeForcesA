#include<iostream> 
//#include<algorithm>
using namespace std;

int main(){
    int x = 0;
    int result=0;
    cin >> x;
    while(x != 0){
        if(x >= 5){
            result++;
            x -= 5;
        }
        else if(x >= 4){
            result++;
            x -= 4;
        }
        else if(x >= 3 ){
            result++;
            x -= 3;
        }
        else if(x >= 2){
            result++;
            x -= 2;
        }
        else if (x >= 1){
            result++;
            x -= 1;
        }
    }
    cout<<result<<endl;
}
