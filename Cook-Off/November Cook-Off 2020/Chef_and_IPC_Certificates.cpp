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
  
    int n,m,k;
    cin>>n>>m>>k;

    int cnt=0;

    while(n--)
  { 
     int arr[k];

     int sum=0;

     for(int i=0;i<k;i++)
     {
         cin>>arr[i];
         sum+=arr[i];
     }

     int q;
     cin>>q;

     if(sum>=m && q<=10)
     cnt++;
  }

  cout<<cnt<<endl;



    return 0;
}