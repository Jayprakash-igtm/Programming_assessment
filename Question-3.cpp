/*Given a non-empty binary tree, find the maximum path sum. 
A path is defined as any sequence of nodes from some starting 
node to any node in the tree along the parent-child connections.
 The path must contain at least one node and does not need to go
  through the root. The function should return an integer 
  representing the maximum path sum*/

#include <iostream>
#include <limits>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

int maxPathSumHelper(TreeNode* root, int &maxSum) {
    
    if (root == nullptr) {
        return 0;
    }

    int leftSum = max(0, maxPathSumHelper(root->left, maxSum));
    int rightSum = max(0, maxPathSumHelper(root->right, maxSum));

    maxSum = max(maxSum, leftSum + rightSum) + root->val;

    return max(leftSum, rightSum) + root->val;
}

int maxPathSum(TreeNode* root) {

    int maxSum = numeric_limits<int>::min();

    maxPathSumHelper(root, maxSum);

    return maxSum;
}

int main() {

     TreeNode* root = new TreeNode(1);
 root->left = new TreeNode(2);
 root->right = new TreeNode(3);

 cout << "Maximum path sum: " << maxPathSum(root) << endl;

 return 0;
}
