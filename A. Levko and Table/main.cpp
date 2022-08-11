#include<iostream>

using namespace std;

int main(){
    int n, k;
    cin>>n>>k;
    int criticVal = (k - (n-1));
    int ones = 1;
    int cricPlace =  n-1, start =0;
    bool flag = false;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j == cricPlace && !flag){
                cout<<criticVal;
                flag = true;
            }
            else if (j == start && flag){
                cout<<criticVal<<" ";
            }
            else{
                cout<<ones<<" ";
            }
        }
        cout<<endl;
        if(i != 0)
            start++;
    

    }

}
