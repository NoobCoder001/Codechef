#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define pb push_back
#define f first
#define s second
using namespace std;

ll bindec(string n) 
{ 
	string num = n; 
	ll dec_value = 0; 

	ll base = 1; 

	ll len = num.length(); 
	
	for (int i = len - 1; i >= 0; i--) { 
		if (num[i] == '1') 
			dec_value += base; 
		base = 1LL*base * 2LL; 
	} 

	return dec_value; 
} 
string decbin(ll n)
{
    string str;
    
    for (ll i = 31; i >= 0; i--) 
    { 
        ll k = n/pow(2LL , i); 
        if (k & 1LL) 
         {
            // cout << "1";
             
             str+='1';
         }
        else
           {
               //cout << "0";
               if(str.size()!=0)
               str+='0';
           }
    }
    
    return str;
} 
    
ll binaryconcat(ll x , ll y)
{
    string str1 = decbin(x);
    string str2 = decbin(y);
    
    string add1 = str1+str2;
    string add2 = str2+str1;
    
    ll ans1 = bindec(add1);
    ll ans2 = bindec(add2);
    
    return abs(ans1 - ans2);
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
        
        ll n,i,j;
        cin>>n;
        
        ll arr[n];
        
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        
        ll ma = 0;
        
        for(i=0;i<n;i++)
        {
            for(j=i;j<n;j++)
            {
               // cout<<decbin(arr[i])<<" "<<decbin(arr[j])<<endl;
                ma = max(ma , binaryconcat(arr[i],arr[j]));
            }
        }
        
        cout<<ma<<endl;
    } 
    

    return 0;
}