#include<iostream>
#include<cmath>
using namespace std;

int main() {
    int n, x, y;
    cin >> n >> x >> y;
    // should come 
    float numOfPeople = (y / 100.00) * (n/1.00);
    if (x >= ceil(round(numOfPeople))) {
        cout << 0 << endl;
        return 0;
    }
         
    int result = ceil(abs(x - numOfPeople));
    cout << result << endl;
}