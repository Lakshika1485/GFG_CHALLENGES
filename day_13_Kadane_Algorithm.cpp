class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(vector<int> &arr) {
        // code here...
        int n = arr.size();
        int curr_sum = 0;
        int max_sum = INT_MIN;
        
        for(int i = 0; i < n; i++)
        {
            curr_sum += arr[i];
            max_sum = max(curr_sum, max_sum);
            
            if(curr_sum < 0)
            curr_sum = 0;
            
        }
        return max_sum;
    }
};
