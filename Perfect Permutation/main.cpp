#include<iostream>
#include<vector>
using namespace std;


int main(){
    int n =0;
    cin>>n;
    if(n%2 != 0){
        cout<<-1<<endl;
        return 0;
    }
    vector<int> permutaions;
    for(int i=1; i<=n; i++)
        permutaions.push_back(i);

    for(int k=0; k+1<n; k += 2){
        swap(permutaions[k], permutaions[k+1]);
    } 
    for(int num:permutaions){
        cout<<num<< " ";
    }


}

