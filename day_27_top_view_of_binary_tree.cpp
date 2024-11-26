class Solution {
  public:
    vector <int> bottomView(Node *root) {
        // Your Code Here
        map<int,int> m;
        
        queue<pair<Node*, int> > q;
        
        q.push({root,0});
        
        while(!q.empty())
        {
            auto front = q.front();
            q.pop();
            
            Node* f = front.first;
            int i = front.second;
            
            m[i] = f->data;
            
            if(f->left!= NULL) 
            q.push({f->left,i-1});
            
            if(f->right!= NULL) 
            q.push({f->right,i+1});
        }
    
        vector<int>ans;
        for(auto &i: m)
        {
            ans.push_back(i.second);
        }
        return ans;
        
    }
    
};
