#include <bits/stdc++.h>
using namespace std;
#define read(type) readInt<type>() // Fast read
#define ll long long
#define nl "\n"
#define pb push_back
#define mk make_pair
#define pii pair<int, int>
#define a first
#define b second
#define vi vector<int>
#define vl vector<long long>
#define all(x) (x).begin(), (x).end()
#define umap unordered_map
#define uset unordered_set
#define MOD 1000000007
#define imax INT_MAX
#define imin INT_MIN
#define exp 1e9
#define sz(x) (int((x).size()))
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   	int t;cin>>t;
    while(t--){
 		ll n;cin>>n;
 		ll ans=0;
 		vl arr(n);
 		for (int i = 0; i < n; ++i)
 		      {
 		      	cin>>arr[i];
 		      }      
 		for (int i = 0; i < n; ++i)
 		      {
 		      	for(int j=i+1;j<n;j++){
 		      		if(__gcd(arr[i],2*arr[j])>1||__gcd(arr[j],2*arr[i])>1)ans++;
 		      	}
 		      }
 		      cout<<ans<<nl;      
    }
}