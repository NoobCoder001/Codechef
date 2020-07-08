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
	  
	  ll arr[n] , brr[n];
	  
	  
	  unordered_map<ll , pair<ll,ll> >mp;
	  
	  for(ll i=0;i<n;i++)
	  {
	  	cin>>arr[i];
	  	
	  	(mp[arr[i]]).first++;
	  }
	  
	  int flag=0;
	  
	  for(ll i=0;i<n;i++)
	  {
	      cin>>brr[i];
	      (mp[brr[i]]).second++;
	  }
	  
	  for(auto x:mp)
	  {
	      ll p = (x.second).first - (x.second).second;
	      if((abs(p)%2)!=0)
	      {
	          flag=1;
	          break;
	      }
	  }
	  
	    
	  if(flag==1)
	  cout<<-1<<"\n";
	  else
	  {
	  	ll cnt=0;
	  	
	  	sort(arr,arr+n);
	  	sort(brr,brr+n);
	  	
	  	ll mi = min(arr[0] , brr[0]);
	  	
	  	vector<ll>ans;
	  	
	  	for(auto x : mp)
	  	{
	  	    ll p1 = x.second.first , p2 = x.second.second;
	  	    
	  	    if(p1>p2)
	  	    {
	  	        ll len = (p1-p2)/2;
	  	        
	  	        while(len--)
	  	        ans.push_back(x.first);
	  	    }
	  	    else if(p1<p2)
	  	    {
	  	        ll len = (p2-p1)/2;
	  	        
	  	        while(len--)
	  	        ans.push_back(x.first);
	  	    }
	  	}
	  
	     sort(ans.begin() , ans.end());
	     
	     ll m = ans.size();
	     
	     
         if(m==0)
         cout<<cnt<<endl;
         else
         {
             ll i=0 , j=m-1;
	     
	       //  while(i<j)
	       // {
	       //  cnt+=min(ans[i],ans[j]);
	       //  i++;
	       //  j--;
	       // }
	        
	        if(ans[0]==mi)
		 {
		     
		     ll cnt2=0;
		     
		     for(int i=0;i<m/2;i++)
		     {
		         if(ans[i]==mi)
		         cnt2+=mi;
		         else
		         {
		             cnt2+=min(2*mi , ans[i]);
		         }
		     }
		     
		     ll cnt3 = 1LL*mi*(m-1);
		     
		     cout<<min(cnt2,cnt3)<<endl;
		     
		 }
		 else
		 { 
		     ll cnt2=0;
		     
		     ll cnt3 = 1LL*mi*m;
		     
		     
		     for(int i=0;i<m/2;i++)
		     {
		         cnt2+=min(2*mi , ans[i]);
		     }
		     
		     
		     cout<<min(cnt2,cnt3)<<endl;
		 }
		 
		
         }
         
	  }
   }   


   return 0;
}

