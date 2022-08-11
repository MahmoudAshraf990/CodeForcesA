#include<iostream>
#include<string>
using namespace std;
int main()
{
    string first;
    string second;
    cin >> first;
    cin >> second;
    for(int i=0; i<first.size(); i++){
        if(first[i] >= 'A' && first[i] <= 'Z')
            first[i] += 32;
        if(second[i] >= 'A' && second[i] <= 'Z')
            second[i] += 32;
    }
    if(first > second)
        cout<<"1"<<endl;
    else if(first < second)
        cout<<"-1"<<endl;
    else
         cout<<"0"<<endl;

}