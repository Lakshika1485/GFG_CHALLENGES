class Solution{
    public:
    vector<int>ans;
    
    void print( Node* root)
    {
        if(root == NULL)
        return;
        
        ans.push_back(root->data);
        print(root->left);
        print(root->right);
    }
    
    
    vector<int> preOrder(Node* root)
    {
        print(root);
        
        return ans;
        
    }
};
