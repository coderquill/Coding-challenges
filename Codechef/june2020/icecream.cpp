#include <iostream>
using namespace std;
/*1≤T≤100
1≤N≤103
ai∈{5,10,15} for each valid i*/
int main() {
	// your code goes here
	int testCases;
	cin>>testCases;
	if(testCases>=1 && testCases<=100){
		for(int t = 0; t<testCases; t++){
			int n;
			cin>>n;
			int a[n], flag = 1;
			for(int i = 0; i<n; i++ ){
				cin>>a[i];
			}

			if(n>=1 && n<=1000){


				/*for(int i = 0; i<n; i++ ){
					cout<<a[i]<<" ";
				}
				cout<<endl;*/
				int collection[2];
				collection[0]=0;
				collection[1] = 0;

				if(a[0]!=5){
					flag = 0;
				}else{
					for(int i = 0; i<n; i++){
						if(a[i] == 5){
							collection[0] = collection[0] + 1;
						//cout<<"its 5"<<endl;
						}
						else if(a[i] == 10){
							//cout<<"its 10"<<endl;
							if(collection[0]>=1){
								collection[0] = collection[0] - 1;
								collection[1] = collection[1] + 1;
							}else{
								flag = 0;
								break;
							}
						}
						else if(a[i]==15){
							//cout<<"its 15"<<endl;
							if(collection[1]>=1){
								collection[1] = collection[1] - 1;
							}else if(collection[0]>=2){
								collection[0] = collection[0] - 2;
							}
							else{
								flag = 0;
							//	break;
							}
							if(flag == 0){
								if(collection[0]>=2){
									collection[0] = collection[0] - 2;
									flag = 1;
								}
								else if(collection[1]>=1){
									collection[1] = collection[1] - 1;
									flag = 1;
								}
								else{
									break;
								}
							}
						}

						//cout<<collection[0]<<" "<<collection[1]<<endl;
					}

				}
				if(flag == 1){
					cout<<"YES"<<endl;
				}
				else{
					cout<<"NO"<<endl;
				}
			}
		}
	}
	return 0;
}
