#include <bits/stdc++.h>
using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);
   
   int t;
   cin>>t;
   
   while(t--)
   {
   	int n,m,k;
   
   cin>>n>>m>>k;
   
   int arr[n][k];
   
   for(int i=0;i<n;i++)
   {
      for(int j=0;j<k;j++)
	  cin>>arr[i][j];
   }   
   
   for(int i=0;i<n;i++)
   {
   	   vector<int>vec(k+1);
   	   int ma = INT_MIN , ans;
   	   
   	   for(int j=0;j<k;j++)
   	   {
   	     vec[arr[i][j]]++;
	   }
	   
	   for(int l=1;l<=k;l++)
	   { 
	   	  if(ma<=vec[l])
	   	  {
	   	      ma = vec[l];
			  ans = l;	
		  }
	   }
	   
	   cout<<ans<<" ";
   }
     
   cout<<endl;

   }
   
   return 0;
}
