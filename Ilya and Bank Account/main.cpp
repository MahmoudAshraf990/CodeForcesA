#include<iostream>


using namespace std;


long long  getNumWithoutOneDigit(long long int num, int removed) {
    long long res = num;
    if (removed == 1) {
        res /= 10;
        return res;
    }
    int rem = res % 10;
    res /= 100;
    res = (res * 10) + rem;
    return res;
}


int main() {
    long long int bankState = 0;
    cin >> bankState;
    if (bankState > 0 || bankState == 0) {
        cout << bankState << endl;
        return 0;
    }
    if (bankState == -10) {
        cout << 0 << endl;
        return 0;
    }
    long long  num1 = getNumWithoutOneDigit(bankState, 1);
    long long  num2 = getNumWithoutOneDigit(bankState, 0);

    long long result = (num1 > num2) ? num1 : num2;
    cout << result << endl;
}

