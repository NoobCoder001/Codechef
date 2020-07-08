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
		long long int n;
		cin>>n;
		
		if(n==1||n==2)
		cout<<0<<endl;
		else if(n%2)
		cout<<n/2<<endl;
		else
		{
			long double x = log2(n);
			
			if(x - (int)x==0)
			cout<<0<<endl;
			else if((n/2)%2)
			{
				long long int y = n/2;
				
				cout<<y/2<<endl;
			}
			else
			{
			    // Logic
				long long int cnt=0 , m=n;
				
				while(m%2==0)
				{
					cnt++;
					m=m/2;
				}
				
				long long int p = pow(2,cnt+1);
				
				cout<<n/(p)<<endl;
			}
		}
	}
	return 0;
}
