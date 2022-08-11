#include<iostream>

using namespace std;


/// wrong algo


int main() {
	int n = 0;
	cin >> n;
	int intersting = 1; int temp; 
    if(n == 1){
        cin >> temp;
        cout<<temp+15<<endl;
        return 0;
    }

	cin >> temp;
	if (temp- intersting >= 15) {
		cout << temp - intersting << endl;
		return 0;
	}
	else {
		intersting = temp;
		n--;
	}

	while (n != 0) {
		cin >> temp;
		if (temp - intersting > 15) {
			cout << intersting + 15 << endl;;
			return 0;
		}
		else {
			intersting = temp;
		}
		n--;
	}
	cout << 90 << endl;
}