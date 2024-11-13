class Solution {
  public:
    // Function to check if a string is a palindrome.
    bool isPalindrome(string& s) {
        // code here
        int n = s.size();
        int left=0;
        int right = n-1;
        
        while(left<right)
        {
            if(s[left]!=s[right])
            return 0;
            
            left++;
            right--;
        }
        return 1;
    }
};
