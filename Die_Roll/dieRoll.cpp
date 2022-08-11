#include<iostream>

using namespace std;



int main(){
    int y_points, w_points;
    cin >> y_points >> w_points;
    string result = "";
    char denominator =  '0';
    char numerator = '0';
    if(w_points ==1 && y_points == 1){
        result = "1/1";
    }
    else{
        int greater = (y_points > w_points) ? y_points : w_points;
        
        greater = 6 - greater;
        greater++;
        denominator =  '0' + 6;
        if(greater % 2 == 0){
            greater /= 2;
            denominator = (6/2) +'0';
        }
        else if(greater == 3){
            denominator = (6/3) + '0';
            greater = 1;
        }
        numerator = greater+'0';
        //char denominator = 6 - '0';
        ///result = numerator+"/"+denominator;
    }
    if(!result.size()){
        cout<<numerator<<"/"<<denominator;
    }else
        cout << result<<endl;
}