#include<iostream>
#include<cmath>
using namespace std;

int modpow(int x, int n, int m) {
    if (n == 0) return 1%m;
    long long u = modpow(x,n/2,m);
    u = (u*u)%m;
    if (n%2 == 1) u = (u*x)%m;
    return u;
}
int main(){ 
    long long int result = 0;
    int exponnent = 0;
    cin>>exponnent;
    result = modpow(1378, exponnent, 10);
    cout<<result<<endl;
    return 0;
} 

