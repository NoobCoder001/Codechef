#include <bits/stdc++.h>
#define ll long long

using namespace std;

int solve(int ch , int x)
{
	if(x>=ch)
   	return 1;
   	else
   	{
   	   double p = ch/(double)x;
   	  
   	  ll q = ceil(log2(p));
   	  
   	  return q+1;  
	}
}
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);
   
   
   int t;
   cin>>t;
   
   while(t--)
   {
   	   ll n,x;
   	  cin>>n>>x;
   	  
   	  int arr[n];
   	  
   	  for(int i=0;i<n;i++)
   	  cin>>arr[i];
   	  
   	 
   	 // cout<<"Value Required to make corona free :- "<<solve(arr[0],x)<<endl;
   	  
   	  ll  ans=0 , residue=0;
   	  
	   sort(arr,arr+n);
	    
	    ll rem=1;
	    
   	  for(int i=0;i<n;i++)
   	  {
   	  	rem = solve(arr[i],x);
   	  	
   	  	if(rem==1)
   	  	{
   	  		if(arr[i]<x && 2*arr[i]<x)
   	  	    ans++;
		    else
			{
				ans++;
				x = (2LL)*arr[i];
				}	
		}
		else
		{
			ll p = x*pow(2LL,rem-1);
   	  	
   	  	ans+=rem;
   	  	
   	  	x = (2LL)*min((ll)arr[i] ,p);
		}
		
   	  	
   	  	//cout<<rem<<" ";
   	  	
   	  }
   	  
	  cout<<ans<<endl;
   }
  
   return 0;
}
