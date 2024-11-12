class Solution {
  public:
    vector<int> findTwoElement(vector<int>& arr) {
        // code here
        vector <int> res;
        
        int n = arr.size();
        sort(arr.begin(),arr.end());
        
        long long sum = (n*(n+1))/2;
        long long sumsquare = (n*(n+1)*(2*n+1))/6;
        
        long long esum = 0, esumsquare = 0;
        for(int val: arr)
        {
            esum += val;
            esumsquare += (long long) val*val;
        }
        
        long long  sumdiff = sum - esum;
        long long sumsqdiff = sumsquare - esumsquare;
        
        long long sumplusdiff = sumsqdiff/sumdiff;
        
        int m = (sumdiff + sumplusdiff)/2;
        int r = sumplusdiff - m;
        
        res.push_back(r);
        res.push_back(m);
        return res;
        
    }
};
