/*
    Given an array of integers nums, calculate the pivot index of this array.

    The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right.

    If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array.

    Return the leftmost pivot index. If no such index exists, return -1.
*/



class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int left = 0, right = 0;
        for (int i = 0; i < n; ++i)
            right += nums[i];
        for (int i = 0; i < n; left += nums[i], right -= nums[i], i++)
            if (left == right - nums[i])
                return i;
        return -1;
    }
};


// Time complexity O(n)