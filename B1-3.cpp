#include <iostream>
#include <vector>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> A(n);
		for(int i=0;i<n;i++){
			cin>>A[i];
		}
		bool dx=true;
		for(int i=0;i<n/2;i++){
			if(A[i]!=A[n-i-1]){
				dx=false;
				break;
			}
		}
		cout<<(dx?"YES":"NO")<<endl;
	}
	return 0;
}