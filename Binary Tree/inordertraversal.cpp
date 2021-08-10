void inorderfun(Node *root, vector<int> &v){
    if(root==NULL) return;
    inorderfun(root->left,v);
    v.push_back(root->data);
    inorderfun(root->right,v);
    
}

class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    vector<int> inOrder(Node* root) {
        // Your code here
        vector<int> v;
        inorderfun(root, v);
        return v;
    }
};
