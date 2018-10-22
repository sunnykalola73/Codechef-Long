#include <bits/stdc++.h>
using namespace std;

int main() {
    
     long long t;
	 cin>>t;
     while(t--){
         long long q,m,res=0;
         string s;
         int temp;
         cin>>q>>s;
         if(s=="INDIAN")
				m=200; 
		 else m=400;
         while(q--){
             cin>>s;
             if(s=="CONTEST_WON")
			 {
				cin>>temp;
				temp=20-temp;
				res+=300+max(0,temp);
			 }
             else if(s=="TOP_CONTRIBUTOR")
				res+=300;
             else if(s=="BUG_FOUND")
			 {
				cin>>temp;
				res+=temp;
			 }
             else if(s=="CONTEST_HOSTED")
				res+=50;
         }
         cout<<res/m<<endl;
         
         
     }
	return 0;
}
