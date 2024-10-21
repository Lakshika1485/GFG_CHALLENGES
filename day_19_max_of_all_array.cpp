class Solution {
  public:
    // Function to find maximum of each subarray of size k.
    vector<int> max_of_subarrays(int k, vector<int> &arr) {
        vector<int>ans;
        deque<int> dq; 
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            
            if (!dq.empty() && dq.front() == i - k) {
                dq.pop_front();
            }

            while (!dq.empty() && arr[dq.back()] <= arr[i]) {
                dq.pop_back();
            }

            dq.push_back(i);

            if (i >= k - 1) {
                ans.push_back(arr[dq.front()]); 
                }
        }
        return ans;
        // int n = arr.size();
        // // int maximum= INT_MIN;
        // for (int i = 0; i <= n-k; i++)
        // {
        //     // if(arr[i]>arr[i+1] && arr[i]>arr[i+2])
        //   {   int maximum = *max_element(arr.begin()+i , arr.begin()+i+k);
        //       ans.push_back(maximum); 
        // }
         
        // }
        // return ans;
    }
};
