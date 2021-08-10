void reverselevelorder(Node *root, vector<int> &v){
    if(!root) return;
    queue<Node *>q;
    q.push(root);
    stack<Node *>st;
    while(!q.empty()){
        Node *temp= q.front();
        st.push(temp);
        if(temp->right) q.push(temp->right);
        if(temp->left) q.push(temp->left);
        q.pop();
    }
    while(!st.empty()){
        Node *temp=st.top();
        v.push_back(temp->data);
        st.pop();
    }
}

vector<int> reverseLevelOrder(Node *root)
{
    // code here
    vector<int> v;
    reverselevelorder(root,v);
    return v;
    
}
