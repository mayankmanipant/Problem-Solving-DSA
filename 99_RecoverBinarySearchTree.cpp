class Solution {
public:
void dfs(TreeNode* root,vector<int>&v){
    if(!root) return ;
    dfs(root->left,v);
    v.push_back(root->val);
    dfs(root->right,v);
}

void in(TreeNode* root,vector<int>&v,int &i){
    if(!root) return;

    in(root->left,v,i);
    if(root->val!=v[i]) {
        root->val=v[i];
    }
    i++;
    in(root->right,v,i);
}
    void recoverTree(TreeNode* root) {
        vector<int>v;
        dfs(root,v);
        sort(v.begin(),v.end());
        int i=0;
        in(root,v,i);
    }
};
