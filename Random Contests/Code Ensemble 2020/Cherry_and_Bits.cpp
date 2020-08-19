#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
  
    int n,m;
    cin>>n>>m;

    int arr[n][m];
    
    for(int i=0;i<n;i++)
    {   
        string str;
        cin>>str;
        for(int j=0;j<m;j++)
        {
           arr[i][j] = str[j] - '0';
        }
    }

    
    int q;
    cin>>q;
  
 
    while(q--)
    {
       ll x1,y1,x2,y2;
      cin>>x1>>y1>>x2>>y2;
    
        x1--;
        x2--;
        y1--;
        y2--;


        for(int i=x1;i<=x2;i++)
        {
            for(int j=y1;j<=y2;j++)
            { 
                if(arr[i][j]==0)
                arr[i][j]=1;
                else
                arr[i][j]=0;
                
            }
        } 
    }
    

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        cout<<arr[i][j];

        cout<<endl;
    }


    return 0;
}