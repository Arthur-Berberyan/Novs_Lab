class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size(), m = 0, k = n - 1;
        while (m < k) 
        {
            while (m < k && !isalnum(s[m])) 
            {
                m++;
            }
            while (m < k && !isalnum(s[k])) 
            {
                k--;
            }
            if (tolower(s[m++]) != tolower(s[k--])) 
            {
                return false;
            }
        }
        return true;
    }
};

//Time complexity O(n)
