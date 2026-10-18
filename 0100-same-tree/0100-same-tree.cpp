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
  bool solve(TreeNode*p , TreeNode*q){
    if(p==NULL && q==NULL)
      return true;
    // if(p!=q)
    //   return false;
    if(p==NULL && q!=NULL || q==NULL && p!=NULL)
      return false;
    //   if(p==q)
    //     return true;
    if((p->val==q->val) && solve(p->left,q->left)==true && solve(p->right , q->right)==true)
      return true;
      else
      return false;
  }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return solve(p,q);
    }
};