	#include <bits/stdc++.h>
	using namespace std;
	typedef long long int ll;

	//for(i=0;i<n;++i){}
	
	int main()
	{
		ios_base::sync_with_stdio(0);
		cin.tie(0);
		//int t; cin>>t; while(t--){	}
		int n,k,s=0; cin>>n>>k; int a[n];for(int i=0;i<n;++i){cin>>a[i];}
		sort(a,a+n);
		for(int i=0;i<k;++i){
			s=s+a[i];
		}
		cout<<s<<"\n";
	    return 0;
	
	}
