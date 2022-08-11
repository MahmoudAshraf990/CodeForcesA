#include<iostream>
#include<vector>


using namespace std;


int main(){
    int numOfCards = 0;
    cin>>numOfCards;
    int sum = 0, numOfPlayers = numOfCards/2, temp=0;
    vector<int> cards;
    while(numOfCards != 0){
        cin>>temp;
        sum += temp;
        cards.push_back(temp);
        numOfCards--;
    }
    sum = sum/numOfPlayers;
    for(int i=0; i<cards.size(); i++){
        for(int j=i+1; j<cards.size(); j++){
            if(!cards[j])
                continue;
            if(cards[i]+cards[j] == sum){
                cout<<i+1<<" "<<j+1<<endl;
                cards[j] = 0;
                break;
            }
        }
    }

}




