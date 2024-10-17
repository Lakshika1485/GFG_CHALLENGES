class Solution {
  public:

    // Function to find maximum product subarray
    long long maxProduct(vector<int> &arr) {
        // code here
     vector <int> res;
     long long max_pr = INT_MIN;
        int n =arr.size();
        for(int i = 0; i<n ; i++)
        {
            long long curr_product= 1;
            for( int j = i; j < n; j++)
             {
                 curr_product *= arr[j];
                 max_pr = max(curr_product, max_pr);
                 
             }
                 if(curr_product < 0)
                 {
                    curr_product=0;
                 }
             
        }
    
        return max_pr;
    }
};
