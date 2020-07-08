#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
   
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    
	   int arr[n];
	   
	   for(int i=0;i<n;i++)
	   cin>>arr[i];
	   
	   int sum=0,rsum=0;
	   
	   for(int i=0;i<n;i++)
	   {
	     sum+=arr[i];    
	   }
	   
	   for(int i=0;i<n;i++)
	   {
	       if(arr[i]>k)
	       rsum+=k;
	       else
	       rsum+=arr[i];
	   }
	 
	 cout<<abs(rsum-sum)<<endl;  
	}
	return 0;
}
