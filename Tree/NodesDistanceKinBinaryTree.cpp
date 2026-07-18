class Solution {
public:
    unordered_map<TreeNode*, TreeNode*> mp;

    void inorder(TreeNode* root) {
        if (root == NULL)
            return;

        if (root->left != NULL)
            mp[root->left] = root;

        inorder(root->left);

        if (root->right != NULL)
            mp[root->right] = root;

        inorder(root->right);
    }

    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {

        inorder(root);   // Build parent map

        vector<int> res;
        unordered_set<TreeNode*> vis;
        queue<TreeNode*> q;

        q.push(target);
        vis.insert(target);

        int level = 0;

        while (!q.empty()) {

            if (level == k)
                break;

            int n = q.size();

            while (n--) {

                TreeNode* temp = q.front();
                q.pop();

                if (temp->left != NULL && !vis.count(temp->left)) {
                    q.push(temp->left);
                    vis.insert(temp->left);
                }

                if (temp->right != NULL && !vis.count(temp->right)) {
                    q.push(temp->right);
                    vis.insert(temp->right);
                }

                if (mp.count(temp) && !vis.count(mp[temp])) {
                    q.push(mp[temp]);
                    vis.insert(mp[temp]);
                }
            }

            level++;   // Increment BFS level
        }

        while (!q.empty()) {
            res.push_back(q.front()->val);
            q.pop();
        }

        return res;
    }
};