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
      long long int x,k;
	  
	  cin>>x>>k;
	  	
     long long int sum=0;
     
      while(x%2==0)
      {
      	 sum++;
      	 x=x/2;
	  }
	  
	  for(int i=3;i<=sqrt(x);i+=2)
	  {
	  	  while(x%i==0)
	  	  {
	  	  	  sum++;
	  	  	  x=x/i;
		  }
	  }
	  
	  if(x>2)
	  sum++;
	  
	  if(k<=sum)
	  cout<<1<<endl;
	  else
	  cout<<0<<endl;
	  
	  //cout<<endl;
	  
	  
   }
      
   


   return 0;
}
