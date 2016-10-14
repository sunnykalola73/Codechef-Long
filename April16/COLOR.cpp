//https://www.codechef.com/APRIL16/problems/COLOR/

#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
	int t,n,red,green,blue,max,color[3];
	scanf("%d",&t);
	for(int u=0;u<t;u++)
	{
		scanf("%d",&n);
		char arr[n];
		//for(int o=0;o<n;o++)
		scanf("%s",&arr);
		red=0,green=0,blue=0;
		for(int i=0;i<n;i++)
		{
			if(arr[i]=='R')
			red++;
			else
			if(arr[i]=='G')
			green++;
			else
			if(arr[i]=='B')
			blue++;
		}
		color[0]=red,color[1]=green,color[2]=blue;
		max=*max_element(color,color+3);		
		printf("%d\n",n-max);
	}
	return 0;
}
