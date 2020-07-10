/*
Given a binary tree, write a function to get the maximum width of the given tree. 
The width of a tree is the maximum width among all levels. The binary tree has the same structure as a full binary tree, but some nodes are null.
The width of one level is defined as the length between the end-nodes (the leftmost and right most non-null nodes in the level, where the null nodes between the end-nodes are also counted into the length calculation.
Example 1:
Input: 
           1
         /   \
        3     2
       / \     \  
      5   3     9 
Output: 4
Explanation: The maximum width existing in the third level with the length 4 (5,3,null,9).
Example 2:
Input: 
          1
         /  
        3    
       / \       
      5   3     
Output: 2
Explanation: The maximum width existing in the third level with the length 2 (5,3).
Example 3:
Input: 
          1
         / \
        3   2 
       /        
      5      
Output: 2
Explanation: The maximum width existing in the second level with the length 2 (3,2).
Example 4:
Input: 
          1
         / \
        3   2
       /     \  
      5       9 
     /         \
    6           7
Output: 8
Explanation:The maximum width existing in the fourth level with the length 8 (6,null,null,null,null,null,null,7).
Note: Answer will in the range of 32-bit signed integer.

*/
class Solution {
private:
    typedef unsigned long long ull;
    void bfs(TreeNode* root, int& wid) {
        deque<pair<TreeNode*, ull>> q;
        q.push_back(make_pair(root, 1));
        int genPop = 1, start, end = 0;
        ull pos;
        while (!q.empty()) {
            if (genPop == 0) {
                genPop = q.size();
                start = q.front().second;
                end = q.back().second;
                wid = max(wid, end-start+1);
            }
            TreeNode* node = q.front().first;
            pos = q.front().second;
            q.pop_front();
            --genPop;
            if (node->left)
                q.push_back(make_pair(node->left, pos * 2));
            if (node->right)
                q.push_back(make_pair(node->right, pos * 2 + 1));
        }
    }
public:
    int widthOfBinaryTree(TreeNode* root) {
        if (!root) return 0;
        int width = 1;
        bfs(root, width);
        return width;
    }
};
