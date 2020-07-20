#include <bits/stdc++.h>
typedef long long int ll;

using namespace std;

ll gcd(ll a, ll b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
}


int modInverse(int a) 
{ 
    int m =  998244353;
    int m0 = m; 
    int y = 0, x = 1; 

//    ll (m == 1) 
//      return 0; 
  
    while (a > 1) 
    { 
        // q is quotient 
        int q = a / m; 
        int t = m; 
  
        m = a % m, a = t; 
        t = y; 
  
        y = x - q * y; 
        x = t; 
    } 
  
    // Make x positive 
    if (x < 0) 
       x += m0; 
  
    return x; 
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
    	string str;
    	cin>>str;
    	
    	ll n = str.size();
    
    	long long int weight[26];
    	
    	for(int i=0;i<26;i++)
    	cin>>weight[i];
    			
        //all the substrings 
        
        long long int q = n*(n+1)/2;
		
        vector<string>vec;
        
		map<string ,vector<long long int> >mp;
		
		for(int i=0;i<n;i++)
        {
        	for(int len=1;len<=n-i;len++)
        	{
        	  string temp = str.substr(i,len);
			   
			 //  cout<<temp<<endl;
			   
			   if(mp.find(temp)==mp.end())
			   mp[temp].push_back(0);
			   
			   (mp[temp])[0]++;
            }
		}
		
		for(auto &x : mp)
		{
			string p = x.first;
			
			long long int val = 0;
			
			for(int i=0;i<p.size();i++)
			{
			   val+=weight[p[i]-'a'];	
			}
			
			(x.second).push_back(val);
			
			//cout<<"weight of "<<x.first<<" = "<<val<<endl;
			
		}
		
		
		for(auto &x:mp)
		{
		    string temp = x.first;
		    
		    int m = temp.size();
		    
		    long long int p=0;
		    
		    for(int i=0;i<m;i++)
		    {
		        string q = temp.substr(0,i+1);
		        
		       string check=q;
		        
		        while(check.size()<m)
		        check+=q;
		        
		        
		     //   cout<<q<<" "<<"changed substring = "<<check<<" ";
		        
		        if(check.substr(0,m)==temp)
		        {
		            long long int qq = (mp[q])[1];
		           //  cout<<"YES"<<endl;
		            p+=qq;
		        }
		    
		        
		    }
		    
		   // cout<<endl;
		    
		    p = (x.second)[0] * p;
		    
		    (x.second).push_back(p);
		}
		
		long long int sum=0;
		
		for(auto x:mp)
		{
		  //  cout<<x.first<<" total = "<<(x.second)[0]<<" weight = "<<(x.second)[1]<<" final p = "<<(x.second)[2]<<endl;
		    sum+=(x.second)[2];
		}
		
      cout<<((sum)%998244353 * modInverse(q)%998244353)%998244353<<endl;  
    	

	}
   return 0;
}

