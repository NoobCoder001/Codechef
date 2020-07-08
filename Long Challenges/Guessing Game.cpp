#include <bits/stdc++.h>
using namespace std;
int main() {
	// your code goes here
   
    int n;
    cin>>n;
    
    int i=1 , j = n;
    
    int cnt=1;
    
    
    char ch;
    
    
    cout<<1<<endl; fflush(stdout);
    
    cin>>ch;
    
    if(ch=='L')  // It means all even par wo sach bolegi 
    {
        
        while(i<=j)
        {
            int mid = (i+j)/2;
            
            cnt++;
            
			cout<<mid<<endl;fflush(stdout);
            
            cin>>ch;
            
            if(ch=='E')
            return 0;
            else if(cnt%2)
            {
            	//nothing
            }
            else
            {
                if(ch=='L')
                j=mid-1;
                else if(ch=='G')
                i=mid+1;
            }
            
        }
    }
    else if(ch=='G') //all odd par sach bolegi
    {
        while(i<=j)
        {
            int mid = (i+j)/2;
            
            cnt++;
            cout<<mid<<endl;fflush(stdout);
            
            cin>>ch;
            
            if(ch=='E')
            return 0;
            else if(cnt%2)
            {
                if(ch=='L')
                j=mid-1;
                else if(ch=='G')
                i=mid+1;
            }
            else
            {
            	//nothing
            }
            
        }
    }
    else
    return 0;
    
}
