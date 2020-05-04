/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner scan = new Scanner(System.in);
		if(scan.hasNext())
        {
		    int testCases = scan.nextInt();
        
		for(int t = 0; t<testCases; t++){
			int n =scan.nextInt();
			int q = scan.nextInt();
			int a[] = new int[n];
			for(int i = 0; i<n; i++)
			    a[i] = scan.nextInt();	
			int b[] = new int[q];
			for(int i = 0; i<q; i++)
			    b[i] = scan.nextInt();	
			for(int i = 0; i<n; i++)
			    System.out.println(a[i]);
			for(int i = 0; i<q; i++)
			    System.out.println(b[i]);
			
		}
        }
	}
}
s
