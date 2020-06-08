#include <iostream>
#include<bits/stdc++.h>
using namespace std;
/*
    1≤T≤100 
1≤N≤105
|S|=N
S contains only characters 'x' and 'y'
the sum of N over all test cases does not exceed 3⋅105
*/
int main() {
	int testCases;
	cin>>testCases;
	if(testCases>=1 && testCases <=100){
	    for(int t = 0; t<testCases; t++){
		
	    	string str;
	    	cin.ignore();
		cin>>str;
		//cout<<str<<endl;
		
		
	    	int n = str.length();
	    	if(n>=1&&n<=100000){
			cout<<endl;
	        	int ans = 0;
	        	int a[n];
	        	for(int i = 0; i<n; i++){
	            		a[i] = 0;
	        	}
	        	for(int i = 1; i<n-1; i++){
	            		if(str.at(i)=='x'){
	                		if((str.at(i+1)=='y'&& (a[i+1]==0 && a[i] == 0))){
	                    			ans++;
	                    			a[i+1]=1;
	                    			a[i] = 1;
	                		}
	                
	                		else if(str.at(i-1)=='y'&& (a[i-1]==0 && a[i]== 0)){
	                    			ans++;
	                    			a[i-1] = 1;
	                    			a[i] = 1;
	                		}
	            		}
	       		}
	        
	        	if(str.at(0)=='x'){
	            		if(str.at(1)=='y'&&a[1]==0){
	                		ans++;
	                		a[0] = 1;
	                		a[1] = 1;
	            		}
	        	}
	        	if(str.at(n-1)=='x'){
	            		if(str.at(n-2)=='y'&&a[n-2]==0){
	                		ans++;
	                		a[n-1] = 1;
	                		a[n-2] = 1;
	            		}
	        	}
	       		cout<<ans; 
		
	    	}
	    }
	}
	return 0;
}

