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
#define deb(x) cout<<"[ "<<#x<<" = "<<x<<"] "
#define mp(x,y) make_pair(x,y)
#define pb push_back
#define f first
#define s second
using namespace std;


int calculate(int l , int d)
{
    if(l>d)
    {  
        return 1;
    }
    
       int frac = ceil(d/(double)l);
                     
        if(l*frac==d)
        {
            return frac + 1;
           // return l*(frac + 1);
        }
        else 
        {
            return frac;
           // return l*(frac);
        }
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
        int n;
        cin>>n;

        int weight[n];
      
        unordered_map<int,pii> mp; 

        for(int i=0;i<n;i++)
        {
            cin>>weight[i];

            mp.insert({weight[i] , {i , 0}});
        }

        int l[n];

        for(int i=0;i<n;i++)
        {
            cin>>l[i];
            mp[weight[i]].second = l[i];
        }

        if(n==2)
        {
              if(weight[0]< weight[1])
              cout<<0<<endl;
              else if(l[0]==1)
              cout<<2<<endl;
              else 
              cout<<1<<endl; 

        }
        else
        {
            int ans = 0;
             
            for(int i=2;i<=n;i++)
            {
                
            if(mp[i].first <= mp[i-1].first)
            {
                int l = mp[i].second;
                int d = (mp[i-1].first - mp[i].first); 
                
                int x = calculate(l , d);
                mp[i].first+=l*x;
                ans+=x; 

               // cout<<"x = "<<x<<endl;
            }

            } 

           cout<<ans<<endl;

        }

        
    } 



    return 0;
}