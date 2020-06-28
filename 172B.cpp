#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	int c=0;string n,s; cin>>n>>s;
	for(int i=0;i<n.length();++i){
		if(n[i]!=s[i]){
			c++;
		}
	}
	cout<<c<<"\n";
	return 0;
}
