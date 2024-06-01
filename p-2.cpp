#include <iostream>
#include <sstream>
#include <queue>
#include <string>
#include <vector>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Codec {
public:
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        if (!root) return "X,"; // "X" indicates null node
        return to_string(root->val) + "," + serialize(root->left) + serialize(root->right);
    }
    
    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        stringstream ss(data);
        return deserializeHelper(ss);
    }

private:
    TreeNode* deserializeHelper(stringstream& ss) {
        string str;
        getline(ss, str, ',');
        if (str == "X") return nullptr;
        TreeNode* root = new TreeNode(stoi(str));
        root->left = deserializeHelper(ss);
        root->right = deserializeHelper(ss);
        return root;
    }
};

// Helper function to print tree (for testing purposes)
void printTree(TreeNode* root) {
    if (!root) return;
    cout << root->val << " ";
    printTree(root->left);
    printTree(root->right);
}

int main() {
    // Create a sample binary tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(5);
    
    // Serialize the tree
    Codec codec;
    string serializedTree = codec.serialize(root);
    cout << "Serialized tree: " << serializedTree << endl;
    
    // Deserialize the tree
    TreeNode* deserializedTree = codec.deserialize(serializedTree);

    // Print the deserialized tree (for verification)
    cout << "Deserialized tree: ";
    printTree(deserializedTree);
    cout << endl;
    
    // Clean up memory
    // This part should ideally be implemented as a function to delete the tree nodes
    // but for simplicity, we are not including it here.

    return 0;
}
