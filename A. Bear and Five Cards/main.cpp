#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;


int main(){

    vector<int>cards(5);
    map<int, int> freq;
    int ans = 0, counter=0;
    for(int i=0; i<5; i++){
        cin>>cards[i];
       freq[cards[i]]++;
    }
    if(freq.size() == 1){
        map<int, int>::iterator it = freq.begin();
        ans = (it->first)*2;
        cout<<ans<<endl;
        return 0;
    }
    vector<int>vals;
 //   map<int, int>::iterator it = freq.begin();
    for(auto num:cards){
        if(freq[num] > 1){
            int t = freq[num];
            if(t >= 3){
                vals.push_back(num*3);
                freq[num] -= 3;
            }
            else{
                vals.push_back(num*2);
                freq[num] -= 2;
            }
        }
        else{
            ans += num;
        }
    }
    if(vals.size() > 1){
        sort(vals.begin(), vals.end());
        ans += vals[0];
    }
    cout<<ans<<endl;

}

