#include <bits/stdc++.h>
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
   	 int n;
   	 cin>>n;
   	 
   	 long long int arr[n];
   	 
   	 long long int odd=0 , div4=0;
   	 
   	 for(int i=0;i<n;i++)
   	 {
   	 	cin>>arr[i];
   	 	
   	 	if(arr[i]%2!=0)
   	 	odd++;
   	 	if(arr[i]%4==0)
   	 	div4++;
	 }
	 
	 if(odd==n || div4==n)
	 cout<<n*(n+1)/2<<"\n";
	 else
	 {
	     //code 
	     
	     long long int ans=0;
	     
	     for (int i = 0; i < n; i++)
        {
            // j is the number of elements which should be printed
            for (int j = i; j < n; j++)
           {
               // print the array from i to j
               
               int flag=0 , oddcnt=0 , evecnt=0;
               
			   for (int k = i; k <= j; k++)
              {
              	  if(arr[k]%4==0)
              	  {
              	  	  flag=1;
              	  	  ans++;
              	  	  break;
				  }
				  else if(arr[k]%2!=0)
				  {
				    oddcnt++;	
				  }
              }
			  
			  evecnt = (j-i+1)-oddcnt;
			  
			  if(flag==0 && oddcnt==(j-i+1) || (flag==0 && evecnt>=2))
			  ans++;
        
            //   cout<<endl;
            }
        }
        
        cout<<ans<<endl;
     }	
   }


   return 0;
}
