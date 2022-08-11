#include<iostream> 
//#include<algorithm>
using namespace std;



int min_num_of_shovels(int &k, int &r){
    int result = 1;
    while(1){
        if((result*k)%10 == r || (result*k)%10 == 0){
            break;
        }
        result++;
    }
    return result;
}

int main(){
    int k = 0, r = 0;
    cin >> k;
    cin>>r;
    cout<<min_num_of_shovels(k, r)<<endl;
    return 0;
}
