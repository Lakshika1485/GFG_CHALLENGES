class Solution {
  public:
    vector<int> duplicates(vector<int> &arr) {
      
       int n = arr.size();
        vector<int> res;
        vector<int> freq(n, 0);  
        
        for(int i = 0; i < n; i++) {
            freq[arr[i]]++;
        }
        
        for(int i = 0; i < n; i++) {
            if(freq[i] > 1) {
                res.push_back(i);
            }
        }
        
      
        if(res.empty()) {
            return {-1};
        }
        
        return res;  
        
    }
