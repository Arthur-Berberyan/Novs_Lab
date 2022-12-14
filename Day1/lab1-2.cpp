/*
    Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

    The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

    You must write an algorithm that runs in O(n) time and without using the division operation.
*/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        vector<int> nums2(n, 1);

        int tmp = nums[n - 1];
        for (i = 1; i < n; ++i)
            nums2[i] = nums2[i - 1] * nums[i - 1];
        for (i = n - 2; i >= 0; --i)
        {
            nums2[i] *= tmp;
            tmp *= nums[i];
        }

        return nums2;
    }
};


//time complexity O(n)