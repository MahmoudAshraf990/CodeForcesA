#include<iostream>
#include <cmath>


using namespace std;

int sumOfEdges(int faceOneArea, int faceTwoArea, int faceThreeArea){
    int l = sqrt(faceOneArea * faceTwoArea/faceThreeArea);
    int w = sqrt(faceOneArea * faceThreeArea / faceTwoArea);
    int h = sqrt(faceTwoArea * faceThreeArea / faceOneArea);
    return (l+w+h)*4;
}


int main(){
    int a1, a2, a3;
    cin>>a1>>a2>>a3;
    cout<<sumOfEdges(a1, a2, a3)<<endl;
    return 0;
}
