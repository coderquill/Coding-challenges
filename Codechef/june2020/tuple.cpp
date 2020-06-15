#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int testCases;
	cin>>testCases;
	if(testCases>=1 && testCases<=1000){
	    for(int te = 0; te<testCases; te++){
	        /*int p,q,r,a,b,c;
	        cin>>p>>q>>r>>a>>b>>c;
	        //cout<<p<<q<<r<<a<<b<<c;
	        int f,s,t;
	        f = a-p;
	        s = b-q;
	        t = c-r;*/
	        //cout<<f<<s<<t;
	        int mul[3];
	        int ans = 3;
			int res = 999;
			int diff[3];
	        //if(f ==0 && s==0 &&)
	        int p[3];
	        int a[3];
	        mul[0] = mul[1] = mul[3] = 0;
	        int rem[3];
			int ans2 = 999;
	        for(int i = 0; i<3; i++){
	            cin>>p[i];
	        }
	        rem[0]=p[0];
	        rem[1]=p[1];
	        rem[2]=p[2];
	        for(int i = 0; i<3; i++){
	            cin>>a[i];
	        }
			if(p[0]==a[0] && a[1] == p[1] && p[2]==a[2]){
				res = 0;
			}
	        else if(p[0]==0 && p[1]==0 && p[2]==0){
	            if(a[0]==a[1] && a[0]==0 && a[1]!=a[2]){
					res = 1;
				}
				else if(a[0]== a[2] && a[0]==0 && a[1]!=a[2]){
					res = 1;
				}
				else if(a[1]== a[2] && a[1]==0 && a[0]!=a[2]){
					res = 1;
				}
				else if(a[1] == a[2] && a[1]==0 && a[1] == a[0]){
					res = 0;
				}
				else if(a[0]== a[2] && a[1]!=a[2]){
					res = 2;
				}
				else if(a[1]== a[2] && a[0]!=a[2]){
					res = 2;
				}
				else if(a[1] == a[2] && a[1] == a[0]){
					res = 1;
				}
				else if(a[1] != a[2] && a[1] != a[0] && a[2]!=a[0]){
					res = 3;
				}	
	        }
			else{
				

				for(int i = 0; i<3; i++){
					diff[i] = a[i] - p[i];
				}

				if(diff[0]==0 && diff[1] == 0 && diff[2] == 0){
					ans = 0;				
				}
					
				else if(diff[0]==diff[1] && diff[1] == diff[2] ){
					ans = 1;
					diff[0] = 0;
					diff[1] = 0;
					diff[2] = 0;
				}
					
				else{
					if(diff[0] == diff[1]){
						ans = 1;
						diff[0] = 0;
						diff[1] = 0;
					}
					else if(diff[0] == diff[2]){
						ans = 1;
						diff[0] = 0;						
						diff[2] = 0;
					}
					else if(diff[1] == diff[2]){
						ans = 1;							
						diff[1] = 0;
						diff[2] = 0;
					}
				}
            
            	if(diff[0]==0&&diff[1] ==0 && diff[2]!=0){
                	ans = 2;
                	diff[0] = 0;
                	diff[1] = 0;
                	diff[2] = 0;
            	}
            	else if(diff[0]==0&&diff[2] ==0 && diff[1]!=0){
                	ans = 2;
                
                	diff[1] = 0;
                
            	}
            	else if(diff[1]==0&&diff[2] ==0 && diff[0]!=0){
                	ans = 2;
                	diff[0] = 0;
                
            	}
                
                
            	if(ans!=1 || ans!=0){			
					if(p[0]==0 && p[1]==0 && p[2]!=0){
						mul[0] = 0;
						mul[1] = 0;
						mul[2] = a[2]/p[2];
						rem[2] = a[2]%p[2];
					}
					else if(p[0]==0 && p[2]==0 && p[1]!=0){
						mul[0] = 0;
						mul[2] = 0;
						mul[1] = a[1]/p[1];
						rem[1] = a[1]%p[1];
					}
					else if(p[1]==0 && p[2]==0 && p[0]!=0){
						mul[1] = 0;
						mul[2] = 0;
						mul[0] = a[0]/p[0];
						rem[0] = a[0]%p[0];
					}
					else if(p[0]==0 && p[2]!=0 && p[1]!=0){
						mul[0] = 0;
						mul[1] = a[1]/p[1];
						mul[2] = a[2]/p[2];
						rem[1] = a[1]%p[1];
						rem[2] = a[2]%p[2];
					}
					else if(p[1]==0 && p[2]!=0 && p[0]!=0){
						mul[1] = 0;
						mul[0] = a[0]/p[0];
						mul[2] = a[2]/p[2];
						rem[0] = a[0]%p[0];
						rem[2] = a[2]%p[2];
					}
					else if(p[2]==0 && p[0]!=0 && p[1]!=0){
						mul[2] = 0;
						mul[0] = a[0]/p[0];
						mul[1] = a[1]/p[1];
						rem[0] = a[0]%p[0];
					    rem[1] = a[1]%p[1];
					}
						
					else if(p[0]!=0 && p[1]!=0 && p[2]!=0){
						mul[0] = a[0]/p[0];
						mul[1] = a[1]/p[1];
						mul[2] = a[2]/p[2];
						rem[0] = a[0]%p[0];
						rem[1] = a[1]%p[1];
						rem[2] = a[2]%p[2];

					}
					if(mul[0] == mul[1] && mul[0]==mul[2]){
						if(rem[0]==rem[1] && rem[1]==rem[2]&& rem[0]!=0){
							ans2 = 2;
						}
						else if(rem[0]==rem[1] && rem[1]!=rem[2]){
							ans2 = 3;
						}
						else if(rem[0]==rem[2] && rem[1]!=rem[2]){
							ans2 = 3;
						}
						else if(rem[1]==rem[2] && rem[0]!=rem[2]){
							ans2 = 3;
						}
						else if(rem[1]!=rem[2] && rem[0]!=rem[2]&& rem[0]!=rem[1]){
							ans2 = 3;
						}
						if(rem[0]==rem[1] && rem[1]==rem[2]&& rem[0]==0){
							ans2 = 1;
						}
						//ans2 = 2;
					}
					else if(mul[0] != mul[1] && mul[0]!=mul[2] && mul[1]!=mul[2]){
						ans2 = 3;
					}
					else if((mul[0] == mul[1]&& mul[1]!=mul[2]) ){
					    if(rem[0]==rem[1] && rem[1]==rem[2]&& rem[0]==0){
							ans2 = 2;
						}
						else{
							ans2 = 3;
						}	
					}
					else if((mul[0]==mul[2] || mul[1]!=mul[2])){
						if(rem[0]==rem[1] && rem[1]==rem[2]&& rem[0]==0){
							ans2 = 2;
						}
						else {
							ans2 = 3;
						}
					}
					else if((mul[1]==mul[2] || mul[0]!=mul[2])){
						if(rem[0]==rem[1] && rem[1]==rem[2]&& rem[0]==0){
							ans2 = 2;
						}
						else{
							ans2 = 3;
						}
					}
				}
		
				if(ans<ans2){
					res = ans;		
				}
				else{
					res = ans2;		
				}
			}
	      // cout<<res<<ans<<ans2<<endl;
	       cout<<res<<endl;
	//	cout<<diff[0]<<diff[1]<<diff[2]<<endl;
	//	cout<<mul[0]<<mul[1]<<mul[2]<<endl;
	//	cout<<rem[0]<<rem[1]<<rem[2]<<endl;
	
	/*
	5
12 14 15
27 35 48
3 5 7
6 5 10
8 6 3
9 7 8
0 0 0
1 2 3
0 2 10
4 10 50
	*/
	        
	    }
	}
	return 0;
}


