#include<bits/stdc++.h>
using namespace std;
main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int a,n,p,l;
		cin>>a>>n;
		int ans=0;
		string s;
		for(int i=0;i<n;i++)
		{
			cin>>s>>l>>p;
			ans+=l*p;
		}
		(ans<=a) ? puts("Yes") :puts("No");
	}
}
