/*
Given a non-empty array of digits representing a non-negative integer, plus one to the integer.

The digits are stored such that the most significant digit is at the head of the list, and each element in the array contain a single digit.

You may assume the integer does not contain any leading zero, except the number 0 itself.

Example 1:

Input: [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.
Example 2:

Input: [4,3,2,1]
Output: [4,3,2,2]
Explanation: The array represents the integer 4321.
*/


#include <bits/stdc++.h>
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 0;
        int add = 0;
        vector<int> ans;
        for(int i = digits.size()-1; i>=0; i--){
            if(i == digits.size()-1){
                add = digits[i]+1+carry;
            }
            else if(carry == 0){
                add = digits[i];
            }
            else{
                add = digits[i]+carry;
            }
            if(add<=9){
                carry = 0;
                ans.push_back(add);
              //  cout<<i<<add<<carry<<endl;
            }else{
                carry = add/10;
                add = add%10;
                
                ans.push_back(add); 
               // cout<<i<<add<<carry<<endl;
            }
            
        }
        if(carry>0){
            ans.push_back(carry);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
