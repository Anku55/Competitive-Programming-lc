class Solution {
public:
    int ans=0;
    int dfs(TreeNode* root){
        if(!root)return INT_MIN;
        int le=dfs(root->left);
        int ri=dfs(root->right);
        int mx=max(root->val,max(le,ri));
        if(root->val==mx){
            ans++;
        }
        return mx;
    }
    int countDominantNodes(TreeNode* root) {
        dfs(root);
        return ans;
        
    }
};