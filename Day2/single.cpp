class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int val = 0;
        int i, n;
        n = nums.size();
        for(i=0; i<n; i++)
            val = val ^ nums[i];
        return val;
    }
};

//Time complexity O(n)
