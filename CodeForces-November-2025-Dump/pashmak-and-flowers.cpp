#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m,x,c1=0,c2=0,c3;
	cin>>n;
	long long a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	x=a[0];
	m=a[n-1];
	for(int i=0;i<n;i++)
	{
		if(a[i]==m)
		c1++;
		else if(a[i]==x)
		c2++;
		
	}
	c3=c1*c2;
	if(m==x)
	{
		cout<<"0"<<" "<<((n*(n-1))/2);
	}
	else
	{
		cout<<(m-x)<<" "<<c3;
	}
}