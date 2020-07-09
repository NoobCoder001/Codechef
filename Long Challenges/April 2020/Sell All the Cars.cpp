#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll mod = 1000000007;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);
  
   int t;
   cin>>t;
   
   while(t--)
   {
      	ll n;
      	cin>>n;
      	
      	ll arr[n];
      	
      	for(int i=0;i<n;i++)
      	cin>>arr[i];
      	
      	sort(arr,arr+n);
      	
      	ll sum=arr[n-1] , j=1;
      	
      	for(int i=n-2;i>=0;i--)
      	{
      	   ll x = arr[i]-j;
		 
		   if(x>=0)
		   sum = (sum%mod + x%mod)%mod;
		   
		   
		   j++;
		   	 	
		}
		
		cout<<sum<<"\n";
   }   
   


   return 0;
}
