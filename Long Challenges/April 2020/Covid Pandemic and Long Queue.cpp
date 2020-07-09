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
   	 int n;
   	 cin>>n;
   	 
   	 int arr[n],onecnt=0;
   	 
   	 for(int i=0;i<n;i++)
   	 {
   	 	cin>>arr[i];
   	 	
   	 	if(arr[i]==1)
   	 	onecnt++;
	 }
   	 
   	 
   	 if(onecnt<2)
   	 cout<<"YES"<<endl;
   	 else
   	 {
   	 	int flag=0;
   	 
   	 for(int i=0;i<n;i++)
   	 {
   	 	 
   	 	if(arr[i]==1 && i!=n-1)
   	 	{
   	 		int j=i+1;
   	 		int cnt=0;
   	 		
   	 	   while(j<n && arr[i]!=arr[j])
		   {
		      cnt++;
			  j++;	   	
		   }	
		   
		   
		   if(arr[j]==1)
		   cnt++;
		   
		   //cout<<"cnt = "<<cnt<<" ";
		   
		   if(cnt<6)
		   {
		   	  if(arr[i]==arr[j])
		   	  {
		   	  	flag=1;
		   	    break;
			  }  
		   }
		   
		   
		   i=j-1;
		}
	 }
	 
	 if(flag==0)
	 cout<<"YES"<<endl;
	 else
	 cout<<"NO"<<endl;
	 }
   	 
   }
   


   return 0;
}
