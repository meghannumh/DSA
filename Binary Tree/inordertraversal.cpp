void postorderfun(Node *root, vector<int> &v){
    if(!root) return;
    postorderfun(root->left,v);
    postorderfun(root->right,v);
    v.push_back(root->data);
}
vector <int> postOrder(Node* root)
{
  // Your code here
  vector<int> v;
  postorderfun(root,v);
  return v;
}
