#include<iostream>

using namespace std; 

int main(){
	int n, q,l, r;
	cin >> n;
	int PREFIX_SUM[n];
	for(int i =0; i<n; i++){
		int num =0;
		cin>>num;
		if(i==0){
			PREFIX_SUM[i] = num;
		}else {
			PREFIX_SUM[i] = PREFIX_SUM[i-1] + num;
		}

	}
	cin>>q;
	while(q--){
		cin>>l>>r;
		if(r==0){
			cout<<PREFIX_SUM[0]<<endl;
		}
		else if(l==0){
			cout<< PREFIX_SUM[r] <<endl;
		}
		else{
			cout << PREFIX_SUM[r]-PREFIX_SUM[l-1] <<endl;
		}
	}

	return 0;
}

