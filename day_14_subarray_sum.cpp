class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int s) {
        vector <int> res;
        int n =arr.size();
        for(int i = 0; i<n ; i++)
        {
            int curr= 0;
            for( int j = i; j < n; j++)
             {
                 curr += arr[j];
                 if(curr==s)
                 {
                     res.push_back(i+1);
                     res.push_back(j+1);
                     return res;
                 }
             }
        }
    
        return {-1};
    }
    
};
