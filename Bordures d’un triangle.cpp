#include<bits/stdc++.h>
using namespace std;
main()
{
	int a[3],b[3];
	int maxx=-1000,minx=1000;
	int maxy=-1000,miny=1000;
	for(int i=0;i<3;i++)
	{
	cin>>a[i]>>b[i];
	if(a[i]>maxx) maxx=a[i];
	if(a[i]<minx) minx=a[i];
	if(b[i]>maxy) maxy=b[i];
	if(b[i]<miny) miny=b[i];
	}
	int n;
	scanf("%d",&n);
	while(n--)
	{
		bool checkx,checky;
		int x,y;
		scanf("%d %d",&x,&y);
		checkx=(x>=minx && x<=maxx);
		checky=(y>=miny && y<=maxy);
		(checkx && checky) ? puts("in") :puts("out");
	}
	return 0;
}
