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
#include <queue>
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL){
            return ans;
        }
        queue <TreeNode*> q;
        q.push(root);
        q.push(NULL);

        vector<int> tempVec;
        while(!q.empty()){
            TreeNode* temp=q.front();
            q.pop();
            
            // here temp can be NULL or not NULL so if else used
            // if NULL then one level is complete
            if(temp==NULL){
                ans.push_back(tempVec);
                tempVec.clear();
                if(!q.empty()){
                    // this NULL to signify level 1 END as level 0 has ended completely
                    q.push(NULL);
                }
            }
            else{
                // temp is not null here
                tempVec.push_back(temp->val);

                if(temp->left!=NULL){
                    q.push(temp->left);
                }
                if(temp->right!=NULL){
                    q.push(temp->right);
                }


            }

        }


        
    return ans;}
};