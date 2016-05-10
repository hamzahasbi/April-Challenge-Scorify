#include<bits/stdc++.h>
using namespace std;
int to_decimal(string s)
{
	int x;
	int ans=0;
	int p=s.size();
	string tmp="";
	for(int i=0;i<s.size();i++)
	{
		
		tmp+=s[i];
		x=atoi(tmp.c_str());
		ans+=x*(pow(2,p-1-i));
		tmp="";
	}
	return ans;
}
string to_binary(int x)
{
	string r;
	if(x==0) return "0";
	while(x!=0)
	{
		r+=((x%2==0)?'0':'1');
		x/=2;
	}
	reverse(r.begin(),r.end());
	return r;
}
main()
{

	int h=10;
	while(h--)
	{
	string s;
	string a[3],tmp="";
	cin>>s;
	int k=0;
	for(int i=0;i<s.size();i++)
	{
		tmp="";
		while(s[i]!='+' && s[i]!='=' && i<s.size()) 
		{
			 tmp+=s[i];
			 i++;
		}
		a[k++]=tmp;
	}
	int sum;
	sum=to_decimal(a[0])+to_decimal(a[1]);
	cout<<to_binary(sum)<<endl;
	}
	return 0;
	
}
