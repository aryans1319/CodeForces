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
   
   	ll n,h;cin>>n>>h;
   	ll sum=0;
   	ll arr[n];
   	for (int i = 0; i < n; ++i)
   	{
   		cin>>arr[i];
   		
   	}
   	for (int i = 0; i < n; ++i)
   	{
   		if(arr[i]<=h)
   			sum+=1;
   		else
   			sum+=2;
   	}

   
   	cout<<sum<<nl;
}
