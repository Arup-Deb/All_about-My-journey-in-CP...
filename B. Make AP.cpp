#include<bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
	int t; cin>>t;
	while(t--)
	{
		int a,b,c;
		cin>>a>>b>>c;
		
		if(a==b && b==c || b-a == c-b)
		{
			cout<<"YES"<<endl;
		}
		else if((2*b-c)%a ==0 && 2*b - c>0 || (2*b-a)%c ==0 && 2*b - a>0)
		{
			cout<<"YES"<<endl;
		}
		else if((a+c)%(2*b)==0)
		{
			cout<<"YES"<<endl;
		}
		else
		{
			cout<<"NO"<<endl;
		}
	}
	
}
