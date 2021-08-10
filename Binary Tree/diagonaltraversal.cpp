void preorder(Node *root, map<int, vector<int>>&m, int d){
    if(!root) return;
    m[d].push_back(root->data);
    preorder(root->left,m,d+1);
    preorder(root->right,m,d);
}

vector<int> diagonal(Node *root)
{
   // your code here
   map<int, vector<int>> m;
   int d=0;
   preorder(root, m, d);
   vector<int> v;
   for(auto i:m){
       vector<int> vt=i.second;
       for(auto j:vt) v.push_back(j);
   }
   return v;
}
