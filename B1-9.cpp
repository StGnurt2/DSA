#include <iostream>
#include <vector>

using namespace std;

int main(){
	string s;
	cin>>s;
	vector <int> vtri[26];
	for(int i=0;i<52;i++){
		vtri[s[i]-'A'].push_back(i);
	}
	int cnt=0;
		for(int i=0;i<26;i++){
			for(int j=i+1;j<26;j++){
				int A1=vtri[i][0],A2=vtri[i][1];
				int B1=vtri[j][0],B2=vtri[j][1];
				if((A1<B1&&B1<A2&&A2<B2)||(B1<A1&&A1<B2&&B2<2)){
					cnt++;
				}
			}
		}
		cout<<cnt<<endl;
}