#include<bits/stdc++.h>
using namespace std ;
// vector<vector<int>> zigzagLevelOrder(TreeNode* root) { 
//     vector<vector<int>> ans;
//     if (root == nullptr) return ans;

//     queue<TreeNode*> q;
//     bool leftToRight = true;
//     q.push(root);

//     while (!q.empty()) {
//         int n = q.size();
//         vector<int> level(n);

//         for (int i = 0; i < n; ++i) {
//             TreeNode* node = q.front();
//             q.pop();

//             int index = leftToRight ? i : n - 1 - i;
//             level[index] = node->val;

//             if (node->left) q.push(node->left);
//             if (node->right) q.push(node->right);
//         }

//         ans.push_back(level);
//         leftToRight = !leftToRight;
//     }

//     return ans;
// }

