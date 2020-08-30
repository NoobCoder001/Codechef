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


ll gcd(ll a, ll b)   //Function to find gcd of two numbers
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

        map<int,int>mp;

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            mp[arr[i]]++;
        }

        map<int,int>ans;

        for(auto x : mp)
        {
           ans[x.second]++;
        }

        int mi = 0 , cnt = 0;

        for(auto x : ans)
        {
            if(mi < x.second)
            {
                mi = x.second;
                cnt = x.first;
            }
        }

        cout<<cnt<<endl;
    }


    return 0;
}