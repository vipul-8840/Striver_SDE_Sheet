#include<bits/stdc++.h>
using namespace std ;
void path(TreeNode* root, vector<string>& ans, string s) {
    if (root == NULL) return;

    if (!s.empty()) s += "->";
    s += to_string(root->val);

    if (!root->left && !root->right) {
        ans.push_back(s);
        return;
    }

    path(root->left, ans, s);
    path(root->right, ans, s);
}

vector<string> binaryTreePaths(TreeNode* root) {
    vector<string> ans;
    path(root, ans, "");
    return ans;
}