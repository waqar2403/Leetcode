class Solution {
public:
    bool isPalindrome(string& s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
    
    bool validPalindrome(string s) {
        int left = 0, right = s.length() - 1;
        
        while (left < right) {
            if (s[left] != s[right]) {
                // Try skipping the left or the right character
                return isPalindrome(s, left + 1, right) || isPalindrome(s, left, right - 1);
            }
            left++;
            right--;
        }
        
        return true;  // If no mismatch is found, it's already a palindrome
    }
};
