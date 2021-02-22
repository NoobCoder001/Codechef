#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    int t;
    scanf("%d" , &t);

    while(t--)
    {  
        int n;
        scanf("%d" , &n);

    vector<string> str(n); 
       
       for(int i=0;i<n;i++)
       cin>>str[i];

    unordered_map<string , vector<char>> mp;
    
    
    for(auto &x : mp)
    {
        cout<<x.first<<"->"; 
          
         for(auto &i : x.second)
         cout<<i;

         cout<<endl;

    }
 
    for(int i=0;i<str.size();i++)
    {
        char ch = str[i][0];

        string p = str[i].substr(1 , str[i].size() - 1);

        mp[p].push_back(ch);
    }
    int ans = 0; 

    for(auto &x1 : mp)
    {
        vector<char> vec1 = x1.second; 
        
        int arr[26] = {0}; 

        int size1 = vec1.size(); 
        
        for(int i=0;i<size1;i++)
        arr[vec1[i] - 'a']++;   

        for(auto &x2 : mp)
        { 
            if(x2!=x1)
            {
                vector<char> vec2 = x2.second;
           
            int size2 = vec2.size();

            int check = 0;
             
            for(int i=0;i<size2;i++)
            {
                if(arr[vec2[i]-'a']!=0)
                check++;
            }
             
            //cout<<"check = "<<check<<"for "<<x1.first<<"::"<<x2.first<<endl; 
           ans+=(size1-check)*(size2 - check);

            }
            
        }
    } 

      
  cout<<ans<<endl;
       
     
    }
    


    return 0;
}