class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* root)
    {
        vector<int>ans;
        if(root ==nullptr) return ans;
        queue<Node*> q;
        q.push(root);

        while(!q.empty())
        {
            int n = q.size();
           
            while(n--)
            {
                Node* front = q.front();
                q.pop();

                ans.push_back(front->data);
                if(front->left) q.push(front->left);
                if(front->right) q.push(front->right);

            }
        }
        return ans;
      
    }
};
