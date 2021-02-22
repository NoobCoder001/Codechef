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


int main()
{
    // ios::sync_with_stdio(false);
    // cin.tie(0);
    // cout.tie(0);

    int t;
    cin>>t;
    cin.ignore(256 ,'\n');  
   
    while(t--)
    {
     
        string str; 
        getline(cin , str); 

       //logic 
       bool am = false;
      
       int size = str.size();

       //cout<<"am = "<<am<<" ";
            
       int hh = (str[0]-'0')*10 + (str[1] - '0');
       int mm = (str[3]-'0')*10 + (str[4] - '0'); 
        
       
       if(str[6]=='A')
       {
            if(hh==12)
            hh = 0;
       }
        else 
        { 
            if(hh!=12)
            hh+=12;
        }

       string ans = "";

        int n;
        cin>>n; 
        n++;
      
        bool first = true; 

        while(n--)
        { 
            bool ch = true; 

            string temp;
            getline(cin , temp); 

             if(first)
            {  
                first = false;
                continue;
            } 
            
            //cout<<"temp ="<<temp;
           //case of L
            
            int lhh = (temp[0]-'0')*10 + (temp[1] - '0');
            int lmm = (temp[3]-'0')*10 + (temp[4] - '0'); 
            

            bool lam = false; 

            if(temp[6]=='A')
            {
                if(lhh==12)
                lhh = 0;
            }
            else 
            { 
                if(lhh!=12)
                lhh+=12;
            }

            

           //case of R
            int rhh = (temp[9]-'0')*10 + (temp[10] - '0');
            int rmm = (temp[12]-'0')*10 + (temp[13] - '0'); 
            
            
            bool ram = false; 

            if(temp[15]=='A')
            {
                if(rhh==12)
                rhh = 0;
            }
            else 
            { 
                if(rhh!=12)
                rhh+=12;
            }
              
            if(hh<lhh || hh>rhh)
            ch = false;
           
            if(hh==lhh && mm<lmm)
            ch = false;

            if(hh==rhh && mm>rmm)
            ch = false;
            
            
            if(ch)
            ans+='1';
            else 
            ans+='0'; 

        } 
      
        cout<<ans<<endl;
    } 



    return 0;
}