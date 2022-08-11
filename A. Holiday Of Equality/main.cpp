#include<iostream>
#include<vector>


using namespace std;

int get_max(vector<int> &arr){
    int max = 0;
    for(int num : arr){
        if(num > max){
            max = num;
        }
    }
    return max;
}


int main(){

    int n = 0;
    cin>>n;
    int personMoney =0, result = 0;
    vector<int> persons;
    while(n != 0){
        cin>>personMoney;
        persons.push_back(personMoney);
        n--;
    }
    int max = get_max(persons);

    for(int fortne:persons){
        if(fortne == max)
            continue;
        result += (max - fortne);
    }

    cout<<result<<endl;    
}

