import java.util.*;
import java.io.*;

class strings {
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		int testCases = scan.nextInt();
		if(testCases>=1 && testCases <=100){
			for(int t = 0 ; t<testCases; t++){
				String str = scan.next();
				int n = str.length();
				//System.out.println(str);
	    			if(n>=1&&n<=105){
				
	        			int ans = 0;
	        			int[] a = new int[n];

	        			for(int i = 0; i<n; i++){
	            				a[i] = 0;
	        			}
	        			for(int i = 1; i<n-1; i++){
	            				if(str.charAt(i)=='x'){
	                				if((str.charAt(i+1)=='y'&& (a[i+1]==0 && a[i] == 0))){
	                    					
	                    					a[i+1]=1;
	                    					a[i] = 1;
								ans++;
	                				}
	                
	                				else if(str.charAt(i-1)=='y'&& (a[i-1]==0 && a[i]== 0)){
	                    					
	                    					a[i-1] = 1;
	                    					a[i] = 1;
								ans++;
	                				}
	            				}
	       				}
	        
	        			if(str.charAt(0)=='x'){
	            				if(str.charAt(1)=='y'&&a[1]==0){
	                				
	                				a[0] = 1;
	                				a[1] = 1;
							ans++;
	            				}
	        			}
	        			if(str.charAt(n-1)=='x'){
	            				if(str.charAt(n-2)=='y'&&a[n-2]==0){
	                				
	                				a[n-1] = 1;
	                				a[n-2] = 1;
							ans++;
	            				}
	        			}
	       			
					System.out.println(ans);	
				}
			}
		
		}
	}
}

