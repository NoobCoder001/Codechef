#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool isPrime(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        return false;
    }

    return true;
}

int main()
{
   int nn = 1000001;
   
    
    int *dp = (int*)malloc(nn*sizeof(int));

    dp[0] = 0;
    dp[1] = 0;
    dp[2] = 1; 

    for(int i=3;i<=nn;i++) 
    {
        if(isPrime(i))
        dp[i]=dp[i-1] + 1;
        else 
        dp[i] = dp[i-1];
    }
    
    int t;
    scanf("%d" , &t);
 
    string str="";

    int tt = t;
    while(tt--)
    {
        int x,y;
        scanf("%d %d" , &x,&y);
        
        if(y==1)
        {
           if(x==1 || x==2)
           str+="Chef\n"; 
           else 
           str+="Divyam\n";
        }
        else
        {
            if(x==1 || x==2)
            str+="Chef\n";
            else 
            { 
                //double ch =  sqrt((double)x);
                //int border = ceil(x / ch);

                int border = dp[x]; 

                if(y<border)
                str+="Divyam\n";
                else 
                str+="Chef\n";
            }
        }

    } 
  
    cout<<str;


    return 0;
}