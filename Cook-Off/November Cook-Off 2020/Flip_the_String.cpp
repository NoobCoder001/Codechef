#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
# define INF 0x3f3f3f3f
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back
#define pb push_back
#define f first
#define s second
using namespace std;


ll gcd(ll a, ll b)
{
    if (a == 0)
    return b;
    return gcd(b % a, a);
}


ll power(ll a,ll b,ll p)
{

    ll res = 1; // Initialize result
    // Update a if it is more than
    // or equal to mod

    a %= p;

    while(b)
    {
    // If b is odd, multiply a with result
    if (b & 1)
    res = (res * a)%p;

    // Here we assume that doing a*a
    // doesn't cause overflow
    a = (a * a) % p;
    b >>= 1; // b = b / 2

    }

    return res;
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
        string str1,str2;
        cin>>str1;
        cin>>str2;

        vector<int> odd , eve;
               
        int n = str1.size();
  
        for(int i=0;i<n;i++)
        {
            if(str1[i]!=str2[i])
            {
                if(i%2==0)
                odd.push_back(i);
                else 
                eve.push_back(i);
            }
        }
        
        // for(auto x : odd)
        // cout<<x<<" ";

        // cout<<endl; 

        int cnt=0;

        for(int i=0;i<odd.size();i++)
        {
            if(odd[i]==odd[i+1]-2)
            {
                while(i+1<n && odd[i]==odd[i+1]-2)
                i++;
            }

            cnt++;
        }
        
        if(odd.size()==0)
        cnt=0;
        

        int cnt1=0;

        
        for(int i=0;i<eve.size();i++)
        {
            if(eve[i]==eve[i+1]-2)
            {
                while(i+1<n && eve[i]==eve[i+1]-2)
                i++;
            }
            
            cnt1++;
        }
        

            
    //    for(auto x : eve)
    //     cout<<x<<" ";

    //     cout<<endl; 
         
        if(eve.size()==0)
        cnt1=0;

         
        // cout<<cnt<<endl;
        // cout<<cnt1<<endl; 

         cout<<cnt1+cnt<<endl;
    }



    return 0;
}