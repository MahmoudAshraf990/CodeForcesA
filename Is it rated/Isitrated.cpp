#include<iostream>
#include<vector>
using namespace std;


bool checkUnRated(vector<vector<int>> & matrix){
    //bool flag = false;
    for(int i=0; i<matrix.size(); i++){
        for(int j = i+1; j<matrix.size(); j++){
            if(matrix[i][0] < matrix[j][0]){
                return true;
            }
        }
    }
    return false;
}


int main(){
    int numberOfParticipants = 0;
    cin>>numberOfParticipants;
    int rating_before, rating_after;
    vector<vector<int>> ratings;
    vector<int> ith_rated;
    for(int i=0; i<numberOfParticipants; i++){
        cin>>rating_before>>rating_after;
        if(rating_before != rating_after){
            cout<<"rated"<<endl;
            return 0;
        }
        ith_rated.push_back(rating_before);
        ith_rated.push_back(rating_after);
        ratings.push_back(ith_rated);
        ith_rated.clear();
    }
    
    if(checkUnRated(ratings)){
         cout<<"unrated"<<endl;
    }
    else{
        cout<<"maybe"<<endl;
    }

}


