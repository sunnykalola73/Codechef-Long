//#include<bits/stdc++.h>
#include<stdio.h>
//using namespace std;
//tuhinkundu
#define MOD 1000000007
#define ll         long long
#define s(n)                        scanf("%d",&n)
#define sc(n)                       scanf("%c",&n)
#define sll(n)                       scanf("%lld",&n)
#define sf(n)                       scanf("%lf",&n)
#define sstr(n)                       scanf("%s",&n)
#define p(n)	printf("%d\n",n)
#define pll(n)	printf("%lld\n",n)
#define pc(n)	printf("%c\n",n)
#define pstr(n)	printf("%s\n",n)
#define pch(str,n)    printf("%s %d\n",str,n)
#define pbl   printf(" ")
#define pnew printf("\n")
int main()
{
	int n,q;
	s(n),s(q);
	ll min=1000000000,max=1,inp;
	for(ll i=0;i<n;i++)
	{
		sll(inp);
		if(inp<min)
		min=inp;
		if(inp>max)
		max=inp;
	}
	while(q--)
	{
		sll(inp);
		if(inp>=min&&inp<=max)
		pstr("Yes");
		else
		pstr("No");
	}
	return 0;
}
