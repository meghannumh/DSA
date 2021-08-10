class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    void levelorder(Node *node, vector<int> &v){
        if(!node) return;
        queue<Node *>q;
        q.push(node);
        while(!q.empty()){
            Node *temp= q.front();
            v.push_back(temp->data);
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
            q.pop();
        }
    }
    vector<int> levelOrder(Node* node)
    {
      //Your code here
      vector<int >v;
      levelorder(node, v);
      return v;
    }
};
