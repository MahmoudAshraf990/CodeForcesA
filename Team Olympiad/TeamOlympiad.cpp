#include<iostream>
#include<vector> 
#include<map>
using namespace std;

int max_teams(int &one, int &two, int &three){
    int result = 0;
    while(one != 0 && two != 0 && three != 0){
        result++;
        one--; two--; three--;
    }
    return result;
}

void get_indexes(vector<int> &nums, int teams){
    int x=0, y=0, z=0;
    while(teams > 0){
        x=0, y=0, z=0;
        for(int i=0; i<nums.size(); i++){
            if(!nums[i])
                continue;
            if(x && y && z){
                
               // x = 0; y =0; z = 0;
                break;
            }
            if(nums[i] == 1 && !x){
                x = i+1;
                nums[i] = 0;

            }
            else if(nums[i] == 2 && !y){
                 y = i+1;
                nums[i] = 0;
            }
            else if(nums[i] == 3 && !z){
                z = i+1;
                nums[i] = 0;
            }
        }
        cout<<x<<" "<<y<<" " << z<< endl;
        teams--;
    }
  
}


int main(){
    int numOfChildren = 0;
    cin>> numOfChildren;
    vector<int> nums(numOfChildren, 0);
    int ones=0, twos=0, threes=0;
   // map<int, int> studentSkills;
   int temp = 0;
    for(int i=0; i<numOfChildren; i++){
       cin>>nums[i];
        //nums.push_back(temp);
        if(nums[i]==1)
            ones++;
        else if(nums[i]==2)
            twos++;
        else 
            threes++;
    }
    if(!threes || !ones || !twos){
        cout<<0<<endl;
        return 0;
    }
    int max = max_teams(ones, twos, threes);
    cout<<max<<endl;
    get_indexes(nums, max);
    return 0;
}


