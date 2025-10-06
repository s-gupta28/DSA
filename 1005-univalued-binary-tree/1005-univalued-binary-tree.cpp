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
private:
    vector<int> preOrder(TreeNode* root){
        vector<int> ans;
        if(root==NULL){
            return ans;
        }
        stack <TreeNode*> stk;
        stk.push(root);
        while(!stk.empty()){
            root=stk.top();
            stk.pop();
            if(root->left!=NULL){
                stk.push(root->left);
            }
            if(root->left!=NULL){
                stk.push(root->right);
            }
            ans.push_back(root->val);
        }
        return ans;
    }
public:
    bool isUnivalTree(TreeNode* root) {
        vector<int> ans;
        ans=preOrder(root);
        unordered_map<int,int> um;
        for(int i=0; i<ans.size(); i++){
            um[ans[i]]+=1;
        }
        if(um.size()>1){
            return false;
        }
        return true;
    }
};