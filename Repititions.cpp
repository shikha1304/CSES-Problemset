#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	//write your code here

	string s;
	cin>>s;

	ll count=1, ans=INT_MIN;
	ll n = s.size();
	//cout<<n<<endl;
	for(ll i=1; i<n; i++){
		if(s[i]!=s[i-1]){
			//cout<<s[i-1]<<" "<<s[i]<<" "<<i<<endl;
			ans = max(ans, count);
			//cout<<"count = "<<count<<" ans = "<<ans<<endl;
			count=1;
		}
		else
		count++;
	}
	ans = max(ans, count);
	cout<<ans;
	return 0;
}