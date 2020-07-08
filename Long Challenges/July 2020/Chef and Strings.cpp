#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
   
	int t;
	cin>>t;
	
	while(t--)
	{
	   int n;
	   cin>>n;
	   
	   int arr[n];
	   
	   for(int i=0;i<n;i++)
	   cin>>arr[i];
	   
	   long long int sum=0;
	   
	   for(int i=1;i<n;i++)
	   {
	       if(arr[i]==arr[i-1])
	       sum+=abs(arr[i]-arr[i-1]);
	       else
	       sum+=abs(arr[i]-arr[i-1])-1;

	   }
	   
	   cout<<sum<<endl;
	}
	return 0;
}
