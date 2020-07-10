#include <bits/stdc++.h>
#define ll long long

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
   	  
   	  int sca=0 , scb=0;
   	  
   	  string a,b;
   	  	 
   	  while(n--)
   	  {
   	  	 cin>>a>>b;
   	  	 
   	  	 int p=0,q=0;
   	  	 
   	  	 for(int i=0;i<a.size();i++)
   	  	 p+=a[i]-'0';
   	  	 
   	  	  for(int i=0;i<b.size();i++)
   	  	  q+=b[i]-'0';
   	    
		   if(p>q)
		   sca++;
		   else if(p==q)
		   {
		   	sca++;
			scb++;
		   }
		   else
		   scb++;	 
	  }
	  
	  if(sca>scb)
	  cout<<0<<" "<<sca<<endl;
	  else if(sca==scb)
	  cout<<2<<" "<<scb<<endl;
	  else 
	  cout<<1<<" "<<scb<<endl;
   }    


   return 0;
}

