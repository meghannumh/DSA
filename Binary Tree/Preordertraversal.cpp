void preorderfun(Node *root, vector<int> &v){
    if(root==NULL) return;
    v.push_back(root->data);
    preorderfun(root->left,v);
    preorderfun(root->right,v);
}

//Function to return a list containing the preorder traversal of the tree.
vector <int> preorder(Node* root)
{
    vector<int> v;
    preorderfun(root, v);
    return v;
    
  // Your code here
  
}
