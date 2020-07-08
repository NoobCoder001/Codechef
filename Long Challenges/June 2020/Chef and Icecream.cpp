#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    
	int t;
	cin>>t;
	
	while(t--)
	{
		int n;
		cin>>n;
		
		vector<int> arr(n);
		
		for(int i=0;i<n;i++)
		cin>>arr[i];
		
		int x5=0 , x10=0;
		
		if(arr[0]!=5)
		{
			cout<<"NO"<<endl;
		}
		else
		{
		  x5++;
		   
		   int flag=0;
		   
		  for(int i=1;i<n;i++)
		  {
		  	int rem = arr[i] - 5;
		  	
		  	if(rem==0)
		  	x5++;
		  	else
		  	{
		  	   if(rem==10)
		  	   {
		  	   	 if(x10!=0)
		  	   	 x10--;
		  	   	 else if(x5>=2)
		  	   	 x5-=2;
		  	   	 else
		  	   	 {
		  	   	 	flag=1;
		  	   	 	break;
				 }
		  	   	 
			   }
			   else if(rem==5)
			   {
			   	   if(x5!=0)
			   	   {
			   	   	x5--;
			   	   	x10++;
				   }
				   else
				   {
				   	flag=1;
				   	break;
				   }
			   	   
			   }
			}
		  }
		  
		  if(flag==1)
		  cout<<"NO"<<endl;
		  else
		  cout<<"YES"<<endl;
		  	
		}
			
	}
	return 0;
}
