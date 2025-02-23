#include <iostream>
#include <sstream>
#include <cctype>

using namespace std;

int main(){
	int n;
	cin>>n;
	while(n--){
		cin.ignore();
		string S,tu,ho="",ten="";
		getline(cin,S);
		stringstream ss(S);
		ss>>ho;
		while(ss>>tu){
			tu[0]=toupper(tu[0]);
			for(size_t i=1;i<tu.length();i++){
				tu[i]=tolower(tu[i]);
			}
			ten+=tu+" ";
		}
		if(!ten.empty()) ten.pop_back();
		for(char &c:ho) c=toupper(c);
		cout<<ten<<","<<ho<<endl;
	}
	return 0;
}