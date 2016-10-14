//https://www.codechef.com/MAY16/problems/LADDU

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
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
int power(int n)
{
	int mul=1;
	for(int i=0;i<n;i++)
	mul*=10;
	return mul;
}
int main()
{
	int t;
	s(t);
	while(t--)
	{
		int k,acti,indi;
		char ind[20];
		//fflush(stdin); 
		//fgets(ind,20,stdin);
		s(acti);scanf(" %[^\n]s",ind);
		int check=0;
		for(int u=0;u<strlen(ind);u++)
		{
			if(ind[u]=='I')
			{
			check=1;
			goto a;
			}
			else
			if(ind[u]=='N')
			{
			check=2;
			goto a;
			}
		}
		a:;
		if(check==1)
		indi=1;
		else
		if(check==2)
		indi=2;
		//pch("acti ",acti);
		/*
		if(ind[2]=='I')
		indi=1;
		else
		indi=0;
		acti=(int)ind[0]-48;*/
		int p=0;
		while(acti--)
		{
			char str[20];
			scanf(" %[^\n]s",str);
			if(str[0]=='T')
			p+=300;
			else
			if(str[0]=='B')
			{
				//p(strlen(str));
				if(strlen(str)==14)
				p+=1000;
				else
				if(strlen(str)==13)
				{
					p+=((int)str[12]-48);
					p+=((int)str[11]-48)*10;
					p+=((int)str[10]-48)*100;
				}
				if(strlen(str)==12)
				{
					p+=((int)str[11]-48);
					p+=((int)str[10]-48)*10;
				}
			}
			else
			{
				int rank=0;
				//p(strlen(str));
				if(str[8]=='W')
				{
					if(strlen(str)==16)
					{
					rank+=((int)str[15]-48);
					rank+=((int)str[14]-48)*10;
					rank+=((int)str[13]-48)*100;
					rank+=((int)str[12]-48)*1000;
					}
					else
					if(strlen(str)==15)
					{
					rank+=((int)str[14]-48);
					rank+=((int)str[13]-48)*10;
					rank+=((int)str[12]-48)*100;	
					}
					else
					if(strlen(str)==14)
					{
					rank+=((int)str[13]-48);
					rank+=((int)str[12]-48)*10;	
					}
					else
					if(strlen(str)==13)
					rank+=((int)str[12]-48);
					
					
					//pc(str[12]);
					//pch("rank",rank);
					if(rank<20)
					p+=300+20-rank;
					else
					p+=300;
				}
				else
				if(str[8]=='H')
				p+=50;
				
			}
			//pch("points",p);
		}
		if(indi==1)
		p(p/200);
		else
		p(p/400);
	}
	return 0;
}
