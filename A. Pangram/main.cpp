#include<iostream>

using namespace std;

const int ALPHAPET_SIZE = 26;

int FREQ_ARR[ALPHAPET_SIZE];

int main(){

	int n = 0;
	cin >> n;
	char c;
	for(int i =0; i<n; i++){
		cin>>c;
		if(c >= 65 && c <= 90){
			char tmp = c + 32;
			FREQ_ARR[tmp-'a']++;
		}else 
		{
			FREQ_ARR[c-'a']++;
		}
		
	}
	for(int i =0; i<ALPHAPET_SIZE; i++){
		if(!FREQ_ARR[i]){
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" <<endl;
	return 0;
}


