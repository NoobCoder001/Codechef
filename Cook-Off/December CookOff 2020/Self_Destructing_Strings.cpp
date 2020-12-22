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

        int cnt1 =0 , cnt0 = 0;
 
 int n = str.size();

        for(int i=0;i<n;i++)
        {
            if(str[i]=='1')
            cnt1++;
            else 
            cnt0++;
        }
      
      if(n%2 || cnt1==0 || cnt0==0)
      cout<<-1<<endl;
      else 
      {
          int diff = abs(cnt1 - cnt0);

           cout<<(diff/2)<<endl;

      }

    }



    return 0;
}