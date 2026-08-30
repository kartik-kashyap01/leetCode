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
    vector<vector<int>>fans;
    vector<int> ans;
    queue<TreeNode*> Q;
    void lo(TreeNode* root){
        if( root== nullptr){
            return;
        }
        Q.push(root);
        Q.push(nullptr);
        while(!Q.empty()){
            TreeNode* curr = Q.front();
            Q.pop();
            if(curr== nullptr){
                //
                if(curr== nullptr){
                    fans.push_back(ans);
                    ans.clear();
                }
                if(!Q.empty()){
                    Q.push(nullptr);
                    
                }
                continue;
            }
            ans.push_back(curr->val);

            if(curr->left != nullptr){
                Q.push(curr->left);
            }
            if(curr->right != nullptr){
                Q.push(curr->right);
            }
        }
    }

    vector<vector<int>> levelOrder(TreeNode* root) {
        lo(root);
        return fans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna