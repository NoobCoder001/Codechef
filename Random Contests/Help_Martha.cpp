#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;


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
        
        unordered_map<char,int>mp;

        for(int i=0;i<str.size();i++)
        mp[str[i]]++;
        

        ll x1,y1;
       // scanf(" %lld %lld",&x1,&y1);
        cin>>x1>>y1;

        ll q;
        //scanf("%lld",&q);
        cin>>q;

      
        while(q--)
        {
             ll x2,y2;
 
           //scanf("%lld %lld",&x2,&y2);
             cin>>x2>>y2;

            ll x_move = abs(x2-x1);
            ll y_move = abs(y2-y1);
  
        
            if(x2 < x1)   //final point is on the left
            {
                if(y2 < y1) //point is down
                {
                    int cnt1 = mp['L'];
                    int cnt2 = mp['D'];

                    if(cnt1<x_move || cnt2<y_move)
                    cout<<"NO"<<endl;
                    else
                    cout<<"YES "<<(x_move + y_move)<<endl;
                    
                }
                else if(y2==y1) //point is just on the left
                {
                    int cnt2 = mp['L'];

                    if(cnt2<x_move)
                    cout<<"NO"<<endl;
                    else
                    cout<<"YES "<<(x_move)<<endl;
                    
                }
                else if(y2 > y1) //point is up
                {
                   int cnt1 = mp['L'];
                   int cnt2 = mp['U'];

                    if(cnt1<x_move || cnt2<y_move)
                    cout<<"NO"<<endl;
                    else
                    cout<<"YES "<<(x_move + y_move)<<endl;
                }
            }
            else if(x2 > x1) //point is on right
            {
                 if(y2 < y1) //point is down
                {
                    int cnt1 = mp['R'];
                    int cnt2 = mp['D'];

                    if(cnt1<x_move || cnt2<y_move)
                    cout<<"NO"<<endl;
                    else
                    cout<<"YES "<<(x_move + y_move)<<endl;
                    
                }
                else if(y2==y1) //point is just on the right
                {
                    int cnt2 = mp['R'];

                    if(cnt2<x_move)
                    cout<<"NO"<<endl;
                    else
                    cout<<"YES "<<(x_move)<<endl;
                    
                }
                else if(y2 > y1) //point is up
                {
                   int cnt1 = mp['R'];
                   int cnt2 = mp['U'];

                    if(cnt1<x_move || cnt2<y_move)
                    cout<<"NO"<<endl;
                    else
                    cout<<"YES "<<(x_move + y_move)<<endl;
                }
            }
            else if(x2==x1) //point is changing in the y-direction
            {
                 if(y2 < y1) //point is down
                {
                    int cnt2 = mp['D'];

                    if((cnt2)<(y_move))
                    cout<<"NO"<<endl;
                    else
                    cout<<"YES "<<(y_move)<<endl;
                    
                }
                else if(y2==y1) //same point
                {
                    cout<<"YES "<<0<<endl; 
                }
                else if(y2 > y1) //point is up
                {
                   int cnt2 = mp['U'];

                    if((cnt2)<(y_move))
                    cout<<"NO"<<endl;
                    else
                    cout<<"YES "<<(y_move)<<endl;
                }
            }
        }
    }


    return 0;
}