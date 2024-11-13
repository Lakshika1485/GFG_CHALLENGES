class Solution{
    public:
    vector<int>ans;
    
    void print( Node* root)
    {
        if(root == NULL)
        return;
        
        print(root->left);
        print(root->right);
        ans.push_back(root->data);
        
    }
    
    vector<int> postOrder(Node* node) {
        
        print(node);
        return ans;
    }
};

