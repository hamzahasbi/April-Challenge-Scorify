#include<bits/stdc++.h>
#define ll long long
using namespace std;
main()
{
	
	string s;
	getline(cin,s);
	for(int i=0;i<s.size();i++)
	{
		if(s[i]>='a' && s[i]<'z') {s[i]++;continue;}
		if(s[i]=='z') {s[i]='a';continue;}
	}
	cout<<s<<endl;
	return 0;
}
