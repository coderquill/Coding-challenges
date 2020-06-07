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
	    	cin>>str;
	    	int n = str.length();
	    	int a[n];
	    	for(int i = 0; i<n; i++){
	        	a[i] = 0;
	    	}
	    	for(int i = 0; i<n; i++){
	        	cout<<str[i];
	    	}
		cout<<endl;
		}
	}
	return 0;
}

