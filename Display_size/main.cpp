#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int numOfPixels = 0;
    cin>>numOfPixels;
    int col=1, row = 1;
    col = numOfPixels;
    
    //int difference = col-row; Area = row*col//  col>=row && col-row is small as possible
    int diff = col - row;
    for(int i=row; i*col <= numOfPixels && row < col; i++){
        if(diff < (col-i)){
            diff = col-i;
            row = i;
        }
        col = numOfPixels/i;
    }
    //row--;
    cout<<row<<"  " << col<<endl;
}
