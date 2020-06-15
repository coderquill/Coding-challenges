#include <iostream>
using namespace std;

int main() {
	int testCases;
	cin>>testCases;
	//if(testCases==2){
	    for(int t = 0; t<testCases; t++){
	        int n,p;
	        cin>>n>>p;
	        //if(n==60){
	            int a[n][n];
	            int q = 18000;
	            int x,y;
	            int res = 1;;
	            for(int i = 0 ; i<n; i++){
	                for(int j = 0; j<n; j++){
	                    cout<<"1"<<" "<<i+1<<" "<<j+1<<" "<<i+1<<" "<<j+1<<endl;
	                    cin>>x;
	                    //cout<<x;
	                    if(x==-1){
	                       res = 0;
	                    }else{
	                       a[i][j] = x; 
	                    }
	                }
	            }
	            if(res == 1){
			cout<<"2"<<endl;
	            for(int i = 0 ; i<n; i++){
	                for(int j = 0; j<n; j++){
	                    cout<<a[i][j]<<" ";
	                    
	                }
	                cout<<endl;
	            }
	            }
	            cin>>y;
	            if(y==1){
	                res = 1;
	            }else if(y==-1){
	                res = 0;
	            }
	            
	            if(res == 0){
	                return 0;
	            }
	        //}
	    }
	    
	//}
	return 0;
}

