
#include<iostream>
#include<vector>

using namespace std;


long long get_kth(long long &numbers, long long &position){
    long long result = 0, i=1;
    vector<long long> odd;
    vector<long long> even;
    while(i <= numbers){
        if( i%2 == 0)
            even.push_back(i);
        else
            odd.push_back(i);
        i++;
    }
  //  vector<long long> res = odd;
    for(long long num : even)
        odd.push_back(num);

    return odd[position-1];
}


int main(){
    long long int numbers, position;
    cin >> numbers >> position;

    cout<<get_kth(numbers, position)<<endl;
    return 0;
}

