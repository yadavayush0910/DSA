#include <iostream>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

// Function to find the lowest common ancestor of two nodes in a binary tree
TreeNode* lowestCommonAncestor(TreeNode* root, int n1, int n2) {
    // Base case: if root is null or matches either of the given nodes, return root
    if (root == nullptr || root->val == n1 || root->val == n2) {
        return root;
    }

    // Recursively search for the LCA in the left and right subtrees
    TreeNode* leftLCA = lowestCommonAncestor(root->left, n1, n2);
    TreeNode* rightLCA = lowestCommonAncestor(root->right, n1, n2);

    // If both left and right subtrees return non-null values, the current node is the LCA
    if (leftLCA && rightLCA) {
        return root;
    }

    // If only one subtree returns a non-null value, return that value
    return (leftLCA != nullptr) ? leftLCA : rightLCA;
}

int main() {
    // Example binary tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = nullptr;
    root->left->right = nullptr;
    root->right->left = nullptr;
    root->right->right = nullptr;

    int n1 = 2, n2 = 3;
    TreeNode* lca = lowestCommonAncestor(root, n1, n2);
    if (lca != nullptr) {
        cout << "Lowest Common Ancestor of " << n1 << " and " << n2 << " is: " << lca->val << endl;
    } else {
        cout << "Lowest Common Ancestor not found!" << endl;
    }

    // Deallocate memory
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}
