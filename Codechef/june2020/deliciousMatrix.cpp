/*
Chef has an integer N and he wants to generate a matrix M with N rows (numbered 1 through N) and N columns (numbered 1 through N). He thinks that M would be delicious if:

Each element of this matrix is an integer between 1 and N2 inclusive.
All the elements of the matrix are pairwise distinct.
For each square submatrix containing cells in rows r through r+a and in columns c through c+a (inclusive) for some valid integers r, c and a≥0:
Mr,c+Mr+a,c+a is even
Mr,c+a+Mr+a,c is even
Can you help Chef generate a delicious matrix? It can be proved that a solution always exists. If there are multiple solutions, you may find any one.

Input
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains a single integer N.
Output
For each test case, print N lines describing a delicious matrix M. For each valid i, the i-th of these lines should contain N space-separated integers Mi,1,Mi,2,…,Mi,N.

Constraints
1≤T≤10
1≤N≤103
the sum of N over all test cases does not exceed 103
*/


#include <iostream>
using namespace std;

int main() {
    int testCases;
    cin>>testCases;
        if(testCases>=1 && testCases<=10){
            for(int t = 0; t<testCases; t++){
                int n;
	            cin>>n;
	            if(n>=1 && n<=1000){
	                int a[1000][1000];
	                int hr = 1, vr = 3;
	                a[0][0] = 1;
			int m[1000][1000];
			m[0][0]=0;
			for(int i = 1; i<1000; i++){
				m[i][0] = 0;
			}
			for(int i = 1; i<1000; i++){
				m[0][i] = 0;
			}
			

			for(int j = 1; j<1000; j++){
				int k = 2*j-2;
				for(int i = j; i<1000; i++){
					k = k+2;
					m[j][i]= k;
							
				}
			 	k = 2*j-2;;
				for(int i = j; i<1000; i++){
					k = k+2;
					m[i][j]= k;
							
				}
			
			}
			
			for(int i = 1; i<1000;i++){
				
				a[0][i] = a[0][i-1]+hr;
	                            hr = hr+2;
			}
			for(int i = 1; i<1000;i++){
				a[i][0] = a[i-1][0]+vr;
	                            vr = vr+2;
			}
			
			
			for(int i = 1; i<1000; i++){
	                    for(int j = 1; j<1000; j++){
				
				a[i][j]=a[i-1][j-1]+m[i][j];
	                    }
	                }
	                for(int i = 0; i<n; i++){
	                    for(int j = 0; j<n; j++){
	                        cout<<a[i][j]<<" ";
	                    }
	                    cout<<endl;
	                }
	            }
            }   
        }
        
	
	
	return 0;
}

