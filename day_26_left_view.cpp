class Solution {
  public:
    vector<int> leftView(Node *root) {
         vector<int>ans;
        if(root == nullptr) return ans;
        queue<Node*> q;
        q.push(root);

        while(!q.empty())
        {
            int n = q.size();
           vector<int>w;
            while(n--)
            {
                Node* front = q.front();
                q.pop();
                
                w.push_back(front->data);
                if(front->left) q.push(front->left);
                if(front->right) q.push(front->right);
                
            }
            ans.push_back(w[0]);
        }
        return ans;
    }
};
