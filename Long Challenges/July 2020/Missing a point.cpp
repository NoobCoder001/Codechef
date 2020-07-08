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
      ll n;
	  cin>>n;
	  
	  ll x,y;
	  
	  ll m = 4*n-1;
	  
	  vector<ll>xcor(m);
	  vector<ll>ycor(m);
	  
	  for(ll i=0;i<m;i++)
	  {
	      cin>>x>>y;
	      
	      xcor[i]=x;
	      ycor[i]=y;
	  }
	  
	  ll ansx=xcor[0] , ansy=ycor[0];
	  
// 	  for(auto p:xcor)
// 	  cout<<p<<" ";
	  
// 	  cout<<endl;
// 	  for(auto p:ycor)
// 	  cout<<p<<" ";
	  
	  
	  for(ll i=1;i<m;i++)
	  ansx^=xcor[i];
	  
	  for(ll i=1;i<m;i++)
	  ansy^=ycor[i];
	  
	  cout<<ansx<<" "<<ansy<<endl;
	  
	  
   }   


   return 0;
}

