#include<iostream>
#include<vector>


using namespace std;


int getMax(vector<int> &arr){
    int max = -1;
    for(int num:arr){
        if(num > max)
            max = num; 
    }
    return max;
}


int main(){
    int chest = 0, biceps=0, back=0;
    int numOfExersices = 0;
    cin>>numOfExersices;
    bool ch = true, bi = false, ba = false;
    int points = 0;
    while(numOfExersices != 0){
        cin>>points;
        if(ch){
            chest += points;
            ch = false;
            bi = true;
        }
        else if(bi){
            biceps += points;
            bi = false;
            ba = true;
        }
        else if(ba){
            back += points;
            ba = false;
            ch = true;
        }
    }
    vector<int> arr = {chest, back, biceps};
    cout<<getMax(arr)<<endl;
}



//"chest" exercises, "biceps" exercises and "back"
