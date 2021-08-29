#include <bits/stdc++.h>
using namespace std;

int main() {
	
	long long int t;
	cin>>t;
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    int sum=0;
	    
	    for(int i=1; i<=n; i++)
	    {
	        sum = sum + i;
	    }
	    
	    if(sum%2 == 0)
	     cout<<sum<<endl;
	     
	    else 
	     cout<<(sum - 1)<<endl;
	}
	
	return 0;
}
