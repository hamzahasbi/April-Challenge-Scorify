#include<bits/stdc++.h>
#define ll long long
int ppcm(int a, int b)
{
 int t=(a*b);
 int m,x;
while(b != 0)
{x = a%b;
 a = b;
 b = x;}
 m=t/a;
 return m;
}
using namespace std;
main()
{
	for(int k=1;k<=10;k++)
	{
		int a,b;
		string s;
		cin>>a>>b>>s;
		if(s=="PGCD") cout<<__gcd(a,b)<<endl;
		else cout<<ppcm(a,b)<<endl;
	}
	
	return 0;
}
