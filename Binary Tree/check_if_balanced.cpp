int checkbalanced(Node *root, bool &res){
    if(!root) return 0;
    int lh=checkbalanced(root->left,res);
    int rh=checkbalanced(root->right,res);
    if(abs(lh-rh)>1) res=false;
    return 1+max(lh,rh);
}
bool isBalanced(Node *root)
{
    //  Your Code here
    bool res=true;
    int h=checkbalanced(root,res);
    return res;
}
