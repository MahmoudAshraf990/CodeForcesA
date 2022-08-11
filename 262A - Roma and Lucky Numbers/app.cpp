#include<iostream>
#include<vector>


using namespace std;

void checkNumber(int &intput, int &result, int &k) {

	int reminder = 0, counter = 0;
	while (intput != 0)
	{
		reminder = intput % 10;
		if (reminder == 7 || reminder == 4) 
			counter++;
		intput /= 10;
	}
	if (counter <= k) {
		result++;
	}

}


int main() {
	int n, k;
	cin >> n >> k;
	int input = 0; int result = 0;
	while (n != 0) {
		cin >> input;
		checkNumber(input, result, k);
		n--;
	}
	cout << result << endl;
}