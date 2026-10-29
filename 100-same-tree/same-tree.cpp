/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
            queue<TreeNode*>a,b;
            a.push(p);
            b.push(q);
            while(!a.empty() && !b.empty()){
                TreeNode*x=a.front();
                TreeNode*y=b.front();
                a.pop();
                b.pop();
               
               if(x==nullptr && y==nullptr){
                continue;
               }
               if(x==nullptr || y==nullptr){
                return false;
               }
               if(x->val!=y->val){
                return false;
               }
               a.push(x->left);
               a.push(x->right);
               b.push(y->left);
               b.push(y->right);
            }
    
               return a.empty() && b.empty();
    
    }  
};