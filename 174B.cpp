#include<bits/stdc++.h>
const int M = 1e9 + 7;
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long int
#define vi vector
#define f(i,n) for(int i=0;i<n;++i)
#define endl "\n"
using namespace std;

//vector<ll> adj[1000001];
//int vis[1000001]; 
//
//int dfs(int node){
//	vis[node]=1;
//	for(int child: adj[node]){
//		if(!vis[child])
//		dfs(child);
//	}
//}


void solve()
{	
	int n,d,c=0; cin>>n>>d;
	for(int i=0;i<n;++i){
		double a,b; cin>>a>>b;
		double all =(sqrt((a*a)+(b*b)));
		if(all<=d){
			c++;
		}
	}
	cout<<c<<"\n"; 
}

int main(void)
{
    fast;
//	ll t;
//	cin>>t;
//    while(t--)
        solve();
}
