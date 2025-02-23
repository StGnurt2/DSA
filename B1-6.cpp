#include <iostream>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
	    cin.ignore();
		string s;
		getline(cin,s);
		bool tang=true,giam=true;
		for(int i=0;i<s.length()-1;i++){
			if(s[i]>s[i+1]) tang=false;
			if(s[i]<s[i+1]) giam=false;
		}
		cout<<(tang||giam?"YES":"NO");
	}
	return 0;
}