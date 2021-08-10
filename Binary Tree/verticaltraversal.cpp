void zigzag(Node *root, vector<int> &v){
    if(!root) return;
    stack<Node *>s1;
    stack<Node *>s2;
    s1.push(root);
    while(!s1.empty()||!s2.empty()){
        while(!s1.empty()){
            Node *temp = s1.top();
            v.push_back(temp->data);
            if(temp->left) s2.push(temp->left);
            if(temp->right) s2.push(temp->right);
            s1.pop();
        }
        while(!s2.empty()){
            Node *temp = s2.top();
            v.push_back(temp->data);
            if(temp->right) s1.push(temp->right);
            if(temp->left) s1.push(temp->left);
            s2.pop();
        }
    }
}
vector <int> zigZagTraversal(Node* root)
{
	// Code here
	vector<int> v;
	zigzag(root,v);
	return v;
}
