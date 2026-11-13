#include<iostream>

#include<vector>

using namespace std;


int main(){

	int N = 0, Q =0, num = 0, st, end;
	cin >> N;
	int freqSum[N];
	for(int i =0; i<N; i++){
		cin>>num;
		freqSum[i] = i == 0 ? num : freqSum[i-1] + num;
	}
	cin>>Q;
	for(int i =0; i<Q; i++){
		cin>>st>>end;
		if(st ==0 || st == end)
			cout<<freqSum[end]<<endl;
		else
			cout<<freqSum[end]-freqSum[st-1]<<endl;
	}

	return 0;

}



