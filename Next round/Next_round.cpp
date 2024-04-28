#include <bits/stdc++.h>
using namespace std;
 
int main() {
	
	int n,s;
	int c=0;
	int d=0;
	cin>>n>>s;
	int a[n];
	for(int i=0;i<n;i++){
	    cin>>a[i];
	    }
	    for(int i=0;i<n;i++){
	      if(a[i]>0 && i<=s-1){
	          c++;
	      }else{
	          break;
	      } 
	    }
	      for(int i=0;i<n;i++){
	      if(a[s-1]==a[s+i] && a[s-1]>0){
	          d++;
	      }else{
	          break;
	      }
	        
	    
	    }
	    if(d!=0){
	  cout<<c+d<<endl;
	     }else{
	         cout<<c<<endl;
	     }
 
	return 0;
}
