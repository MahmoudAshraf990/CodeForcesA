#include<iostream>

using namespace std;

int main(){
    int numOfCubes = 0;
    cin>>numOfCubes;
    int cubes = 1, numOfLevels=0;
    int counter = 2;
    while(cubes <= numOfCubes){
        numOfCubes -= cubes;
        cubes += counter;
        counter++; numOfLevels++;
    }
    cout<<numOfLevels<<endl;
}
