class Solution {
public:
    int target;
    bool hasPathSum(TreeNode* root, int targetSum) {
        target=targetSum;
       return pathSum(root,0);

        
    }
    bool pathSum(TreeNode* root, int sum){
        if(root==NULL)return false;
        sum+=root->val;
        
        if(root->left==NULL &&root->right==NULL){
            return target==sum;


        }
        bool l=pathSum(root->left,sum);
        bool r=pathSum(root->right,sum);

        return l||r;
    }
};