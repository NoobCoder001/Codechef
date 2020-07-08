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
		
		
		if(n==1)
		cout<<1<<endl;
		else if(n%2==0)
		{
			int j=1;
			
			for(int i=1;i<=n;i++)
			{
				int cnt=1;
				if(i%2)
				{
					string str;
				   while(cnt<=n)
				   {
				   //	cout<<j<<" ";
				   	str+=to_string(j) + " ";
					cnt++;
				   	j++;
				   }
				   
				   cout<<str<<endl;
				}
				else
				{
					int x = (j-1)+n;
					
					
					j=(x+1);
					
					string str;
					
					while(cnt<=n)
					{
					//	cout<<x<<" ";
					  str+=to_string(x)+" ";
						cnt++;
						x--;
					}
					
					cout<<str<<endl;
				}
				
			}
		}
		else
		{
			int j=1;
			
			for(int i=1;i<=n;i++)
			{
				int cnt=1;
				
				string str;
				
				while(cnt<=n)
				{
				// cout<<j<<" ";
				str+=to_string(j)+" ";
				 cnt++;
				 j++;	
				}
				
				cout<<str<<endl;
			}
		}
		
	}
	return 0;
}
