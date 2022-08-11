#include<iostream>

using namespace std;


int main(){
    int  numOfWires, numOfShoots;
    cin >> numOfWires;
    int birdsOnEachWire[numOfWires];
   
    for(int i=0; i<numOfWires; i++)
        cin>>birdsOnEachWire[i];
    cin >> numOfShoots;
    int wire, shootedBird;
    for(int j = 0; j < numOfShoots; j++){
        cin>>wire>>shootedBird;
        int rightBirds = birdsOnEachWire[wire-1]-shootedBird;
        int temp = rightBirds-1;
        int leftBirds = shootedBird-1;
        if(wire == 1){
            leftBirds = 0;

        }
        else if(wire == numOfWires)
            rightBirds = 0;
        birdsOnEachWire[wire-2] +=  leftBirds;
        birdsOnEachWire[wire] += rightBirds;
        birdsOnEachWire[wire-1] = 0;
    }

    for(int num : birdsOnEachWire)
        cout << num <<endl;



}

