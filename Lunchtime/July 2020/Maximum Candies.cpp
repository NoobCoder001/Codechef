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


ll gcd(ll a, ll b)
{
    if (a == 0)
    return b;
    return gcd(b % a, a);
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
        int n,m,x,y;
        cin>>n>>m>>x>>y;
        
        if(n==1 && m==1)   /* THE SIMPLE EDGE TEST-CASE */
        cout<<x<<endl;
        
        else if(2*x<=y)
        cout<<x*n*m<<endl;
        else
        {
            ll dp[n][m];
        
        dp[0][0] = min(x,y);
        
        
        ll sum=0;
        
        sum = dp[0][0];
        
        for(int j=1;j<m;j++)
        {
            dp[0][j] = y - dp[0][j-1];
            
            sum+=dp[0][j];
        }
        
        for(int i=1;i<n;i++)
        {
            dp[i][0] = y - dp[i-1][0];
            
            sum+=dp[i][0];
        }
        
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                dp[i][j] = y - max(dp[i-1][j] , dp[i][j-1]);
                
                sum+=dp[i][j];
            }
        }
        
        cout<<sum<<endl;
        
        }
        
    } 


    return 0;
}