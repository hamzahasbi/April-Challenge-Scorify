#include<bits/stdc++.h>
using namespace std;
int distance (int x,int y,int z,int a,int b,int c)
{
	return pow((x-a),2)+pow((y-b),2)+pow((z-c),2);
}
main()
{
	int n;
	scanf("%d",&n);
	vector<int> x(n);
	vector<int> y(n);
	vector<int> z(n);
	int ans[100];
	for(int i=0;i<n;i++)
	{
		scanf("%d %d %d",&x[i],&y[i],&z[i]);
	}
	int a,b,c;
	int m=100000,indice;
	memset(ans,0,sizeof(ans));
	do
	{
		m=100000;
		scanf("%d %d %d",&a,&b,&c);
		if(a==-1 && b==-1 && c==-1) break;
		for(int i=0;i<n;i++)
		{
			ans[i]=distance(x[i],y[i],z[i],a,b,c);
		}
		for(int i=0;i<n;i++)
		{
			if(ans[i]<m) {m=ans[i],indice=i;}
		}
		cout<<"("<<a<<","<<b<<","<<c<<") maps to ("<<x[indice]<<","<<y[indice]<<","<<z[indice]<<")"<<endl;
	} while(a!=-1 && b!=-1 && c!=-1);
	return 0;
}
