class Solution {
public:
    vector<int>ans;
    
    void print( Node* root)
    {
        if(root == NULL)
        return;
        
        print(root->left);
        ans.push_back(root->data);
        print(root->right);
    }
    
    vector<int> inOrder(Node* root)
    {
        print(root);
        return ans;
    }
};

