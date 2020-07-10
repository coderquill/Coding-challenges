/*
Chef is playing a card game with his friend Morty Smith.

The rules of the game are as follows:

There are two piles of cards, pile A and pile B, each with N cards in it. Pile A belongs to Chef and pile B belongs to Morty.
Each card has one positive integer on it
The ‘power’ of a card is defined as the sum of digits of the integer on that card
The game consists of N rounds
In each round, both players simultaneously draw one card each from the top of their piles and the player who draws the card with higher power wins this round and gets a point. If the powers of both players' cards are equal then they get 1 point each.
The winner of the game is the player who has more points at the end of N rounds. If both players have equal number of points then the game ends in a draw.
The game is now over and Chef has told Morty to find the winner. Unfortunately, this task is too complex for him. Help Morty find the winner.

Input:
First line will contain T, number of testcases.
The first line of each test case will contain N, the number of rounds played.
The ith of the next N lines of each test case will contain Ai and Bi, the number on the card drawn by Chef and Morty respectively in round i.
Output:
For each test case, output two space separated integers on a new line:
Output

0 if Chef wins,
1 if Morty wins,
2 if it is a draw,
followed by the number of points the winner had.
(If it is a draw then output either player’s points).
Constraints
1≤T≤1000
1≤N≤100
1≤Ai,Bi≤109
*/

#include <iostream>
using namespace std;


long long int getSum(long long int n) 
 { 
    long long int sum; 
  
    /* Single line that calculates sum */
    for (sum = 0; n > 0; sum += n % 10, n /= 10); 
  
    return sum; 
 } 
 
int main() {
	int testCases;
	cin>>testCases;
	if(testCases>=1 && testCases<=1000){
	    for(int t = 0; t<testCases; t++){
	    int n;
	    cin>>n;
	    int ans;
	    
	    long long int c = 0, m = 0;
	    //int k = 0;
	    if(n>=1 && n<=100){
	        for(int i = 0; i<n; i++){
	           long long int a, b;
	           cin>>a>>b;
	           a = getSum(a);
	           b = getSum(b);
	           //cout<<a<<" "<<b<<endl;
	            if(a>b){
	               c++; 
	            }else if(a<b){
	                m++;
	            }else{
	                c++;
	                m++;
	            }
	            
	            
	        }
	        if(c>m){
	                cout<<"0 "<<c<<endl;
	            }else if(c==m){
	                cout<<"2 "<<c<<endl;
	            }else{
	                cout<<"1 "<<m<<endl;
	            }
	        
	    }
	    }
	    
	}
	return 0;
}



