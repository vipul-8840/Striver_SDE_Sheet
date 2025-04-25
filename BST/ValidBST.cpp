#include <bits/stdc++.h>
using namespace std;

bool helper(TreeNode* root, long minVal, long maxVal) {
    if (!root) return true;
    if (root->val <= minVal || root->val >= maxVal) return false;
    return helper(root->left, minVal, root->val) &&
           helper(root->right, root->val, maxVal);
}

bool isValidBST(TreeNode* root) {
    return helper(root, LONG_MIN, LONG_MAX);
}
