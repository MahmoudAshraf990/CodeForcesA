#include<iostream>
#include<algorithm>
#include<string>
using namespace std;


long long withoutZeros(long long &num){
    string number = to_string(num);
    long long res = 0;
    for(char c : number){
        if(c == '0')
            continue;
        res = res*10 + (c-'0');
    }
    return res;
}


int main(){
    long long int a, b;
    cin>>a>>b;
    long long int result = a + b;
    long long aWithout = withoutZeros(a);
    long long bWithout = withoutZeros(b);
    long long rWithout = withoutZeros(result);

    if(aWithout + bWithout == rWithout)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
