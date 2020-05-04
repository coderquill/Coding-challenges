//https://www.codechef.com/MAY20B/problems/COVID19

#include <iostream>
#include <cstdlib>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int testCases;
	cin>>testCases;

	if(testCases>=1 && testCases<=2000){
	    for(int t = 0; t<testCases; t++){
	    	int n;
	    	cin>>n;
	    	if(n>=2 && n<=8){
	        	int a[n];
	        	int p[n];
	        	for(int i = 0; i<n; i++){
	          	int x;
	            cin>>x;
	            if(x>=0&&x<=10)
	                a[i] = x;

	        	}
	        	for(int i = 0; i<n; i++){
	            p[i] = 1;
	        	}

	        	for(int i = 0; i<n; i++){
	            for(int j=i-1; j>=0; j--){

	                    if(abs(a[j+1] -a[j] <=2)){
	                        p[i]++;
	                    }
											else
												break;

	            }
	            for(int j=i+1; j<=n-1; j++){


	                    if(abs(a[j] -a[j-1] <=2)){
	                        p[i]++;
	                    }
	                    else
	                        break;

	            }
	        }
					int min = INT_MAX, max = INT_MIN;
	        for(int i = 0; i<n; i++){
							if(min>p[i])
								min = p[i];
							if(max <p[i])
								max = p[i];
	        }
					cout<<min<<" "<<max<<endl;
	    }
	  }
	}
	return 0;
}
