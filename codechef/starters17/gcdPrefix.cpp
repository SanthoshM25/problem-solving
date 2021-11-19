#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int b[n];
		for(int i =0; i<n; i++) cin>>b[i];
		int flag = 1;
		for (int i = 1; i < n; ++i)
			if(b[i-1]%b[i] != 0) flag=0;
		if(flag){ 
			for(int i : b) cout<<i<<" ";
			cout<<endl;
		}
		else 
			cout<<-1<<endl;
	}

	return 0;
}