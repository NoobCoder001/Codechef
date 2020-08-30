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
        int n,m; //n = no of players m = no of months
        cin>>n>>m;

        int init_rate[n];


        int cal[n][m];  //a 2d matrix of no. of players as row and months as columns

        
        for(int i=0;i<n;i++)
       { cin>>init_rate[i];
        cal[i][0]=init_rate[i];
       }        
        
        // for(int i=0;i<n;i++)
        // {
        //     int x = init_rate[i];
            
        // }
    
        int query[n][m]; 

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            cin>>query[i][j];
        }
     
        //first update the first column , then update the next columns

        for(int i=0;i<n;i++)
        {
            cal[i][0]+=query[i][0];
        }

        for(int i=0;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                cal[i][j]=(cal[i][j-1] + query[i][j]);
            }
        }

        // for(int i=0;i<n;i++)
        // {
        //     for(int j=0;j<m;j++)
        //     cout<<cal[i][j]<<" ";

        //     cout<<endl;
        // }

        vector<int> rate_month; //this will contain the highest rating of player and the highest rank

       //first calculate the  best ratings for every player
        for(int i=0;i<n;i++)
        {
            int ma = INT_MIN , index=0;

            for(int j=0;j<m;j++)
            {
                if(ma < cal[i][j])
                {
                    ma = cal[i][j];
                    index = j;
                }
            }

            rate_month.push_back(index+1);  //it will have month in which the maximum ratings of players from 0-n-1
        }
         
         //now calculate the best rankings of every player

         vector<pair<int,int>>rank_month(n);

         for(int i=0;i<n;i++)
         {
             rank_month[i].first = INT_MAX;
             rank_month[i].second = 0;
         }

         for(int j=0;j<m;j++)
         {
            vector<pair<int,int>>temp;
            
               for(int i=0;i<n;i++)
               {
                   temp.push_back({cal[i][j],0});
               }

              sort(temp.rbegin(),temp.rend());
             
              temp[0].second = 1;

              for(int i=1;i<temp.size();i++)
              {
                  if(temp[i].first!=temp[i-1].first)
                  temp[i].second+=i+1;
                  else
                  temp[i].second = temp[i-1].second;
              }
              
              unordered_map<int,int>mp;

              for(int i=0;i<temp.size();i++)
              mp.insert({temp[i].first,temp[i].second});


              for(int i=0;i<n;i++)
              {
                  int x = mp[cal[i][j]];
                
                  
                  if(rank_month[i].first > x)
                  {
                      rank_month[i].first = x;
                      rank_month[i].second = j+1;
                  }
              }
         }
             

        
        // cout<<endl;
        
        // for(int i=0;i<n;i++)
        // cout<<rate_month[i]<<" ";

        // cout<<endl;
        // for(auto x : rank_month)
        // cout<<x.first<<" "<<x.second<<endl;

        
        int cnt=0;

        for(int i=0;i<n;i++)
        {
            if(rate_month[i]!=rank_month[i].second)
            cnt++;
        }

        cout<<cnt<<endl;
    }


    return 0;
}