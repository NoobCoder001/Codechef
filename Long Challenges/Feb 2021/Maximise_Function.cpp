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
        int n;
        cin>>n;

        int arr[n]; 

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
      
        int ma = arr[0]; 
        int mi = arr[0];

        for(int i=0;i<n;i++)
        {
            ma = max(ma , arr[i]);  
            mi = min(mi , arr[i]);
        }
       
        long long int ans = 2ll*(ma - mi);

        cout<<ans<<endl;
    } 



    return 0;
}