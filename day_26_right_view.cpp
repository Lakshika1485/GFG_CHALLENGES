class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       // Your Code here
       vector<int>ans;
        if(root == nullptr) return ans;
        queue<Node*> q;
        q.push(root);

        while(!q.empty())
        {
            int n = q.size();
           vector<int>w;
           int t = n;
            while(n--)
            {
                Node* front = q.front();
                q.pop();
                
                w.push_back(front->data);
                if(front->left) q.push(front->left);
                if(front->right) q.push(front->right);
                
                
            }
            
            ans.push_back(w[t-1]);
        }
        return ans;
    }
};

