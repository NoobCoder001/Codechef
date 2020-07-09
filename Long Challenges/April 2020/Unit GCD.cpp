#include <bits/stdc++.h>
using namespace std;
#pragma GCC target ("sse4.2")

int fastscan() {
	bool minus = false;
	int result = 0;
	char ch;
	ch = getchar();
	while (true) {
		if (ch == '-') break;
		if (ch >= '0' && ch <= '9') break;
		ch = getchar();
	}
	if (ch == '-') minus = true; else result = ch-'0';
	while (true) {
		ch = getchar();
		if (ch < '0' || ch > '9') break;
		result = result*10 + (ch - '0');
	}
	if (minus)
		return -result;
	else
		return result;
}
int main() {
	// your code goes here
   
	int t;
	t = fastscan();
	
	while(t--)
	{
	    int n;
   	    n = fastscan();
   	  
   	  
   	  if(n<=3)
   	  {
   	  	cout<<1<<endl;
   	  	
   	  	if(n==1)
   	  	{
   	  		cout<<1<<" ";
   	  		cout<<1<<endl;
		}
		else if(n==2)
		{
			cout<<2<<" ";
			cout<<1<<" "<<2<<endl;
		}
		else if(n==3)
		{
			cout<<3<<" ";
			cout<<1<<" "<<2<<" "<<3<<endl;
		}
   	  }
   	  else
   	  {
   	     
          cout<<n/2<<endl;
   	    
   	      cout<<3<<" ";
		  cout<<1<<" "<<2<<" "<<3<<endl;

          string str;
          
          for(int i=2;i<n/2;i++)
          {
             str+="2 "+ to_string(2*i)+" "+to_string(2*i+1)+"\n";    
          }
          
          cout<<str;
          
          if(n%2==0)
          cout<<"1 "<<n<<endl;
          else
          {
          	 cout<<"2 "<<n-1<<" "<<n<<endl;
		  }
   }
   
	}
	return 0;
}
