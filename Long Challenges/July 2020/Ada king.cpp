#include <bits/stdc++.h>
#define ll long long

using namespace std;
int main()
{
   ios::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);
   
   char arr[8][8];
   
   for(int i=0;i<8;i++)
   {
   	for(int j=0;j<8;j++)
   	arr[i][j]='X';
   }
   
   
   int t;
   cin>>t;
   
   while(t--)
   {
   	  int n;
   	  cin>>n;
   	
   	  arr[0][0]='O';
   	  
   	  int i=0,j=1;
   	  
   	  int cnt=1;
   	  
   	  while(cnt<n)
   	  {
		  if(j>7)
		  { 
		  	i++;
		  	j=0;
		  }
		  
		  arr[i][j]='.';
		  j++;	  
		  cnt++;
		  
	  }
    
    
      for(int i=0;i<8;i++)
      {
      	 for(int j=0;j<8;j++)
      	 cout<<arr[i][j];
      	 
      	 cout<<endl;
	  }
   	   
   }


   return 0;
}

