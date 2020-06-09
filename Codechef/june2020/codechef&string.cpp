#include <iostream>
#include<bits/stdc++.h>
using namespace std;
/*
    There are N students standing in a row and numbered 1 through N from left to right. You are given a string S with length N, where for each valid i, the i-th character of S is 'x' if the i-th student is a girl or 'y' if this student is a boy. Students standing next to each other in the row are friends.

The students are asked to form pairs for a dance competition. Each pair must consist of a boy and a girl. Two students can only form a pair if they are friends. Each student can only be part of at most one pair. What is the maximum number of pairs that can be formed?

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains a single string S.
Output
For each test case, print a single line containing one integer ― the maximum number of pairs.

Constraints
1≤T≤100
1≤N≤105
|S|=N
S contains only characters 'x' and 'y'
the sum of N over all test cases does not exceed 3⋅105
Subtasks
Subtask #1 (100 points): original constraints

Example Input
3
xy
xyxxy
yy
Example Output
1
2
0
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
			    if(n==1){
			        cout<<"0"<<endl;
			    }	        	
			    
			    else{
			        int ans = 0;
	        	int a[n];
	        	for(int i = 0; i<n; i++){
	            		a[i] = 0;
	        	}
	        	if(str.at(0)=='x'){
	            		if(str.at(1)=='y'&&a[1]==0){
	                		ans++;
	                		a[0] = 1;
	                		a[1] = 1;
	            		}
	        	}
			if(str.at(0)=='y'){
	            		if(str.at(1)=='x'&&a[1]==0){
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
			if(str.at(n-1)=='y'){
	            		if(str.at(n-2)=='x'&&a[n-2]==0){
	                		ans++;
	                		a[n-1] = 1;
	                		a[n-2] = 1;
	            		}
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
				if(str.at(i)=='y'){
	                		if((str.at(i+1)=='x'&& (a[i+1]==0 && a[i] == 0))){
	                    			ans++;
	                    			a[i+1]=1;
	                    			a[i] = 1;
	                		}
	                
	                		else if(str.at(i-1)=='x'&& (a[i-1]==0 && a[i]== 0)){
	                    			ans++;
	                    			a[i-1] = 1;
	                    			a[i] = 1;
	                		}
	            		}
	       		}
	        
	        	
	       		cout<<ans<<endl; 
			    }
		
	    	}
	    }
	}
	return 0;
}

