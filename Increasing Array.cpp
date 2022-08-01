#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	//write your code here
	ll n; cin>>n;
	ll a[n]; cin>>a[0];
	ll count=0;
	for(ll i=1; i<n; i++){
		cin>>a[i];
		if(a[i]<a[i-1]){
			count += a[i-1]-a[i];
			a[i] = a[i-1];
		}
	}
	cout<<count;
	return 0;
}

