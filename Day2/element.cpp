class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return nums[0];
        }
        int i=1,j=2;
        while(j<n){
            if(nums[i]==nums[j]){
                break;
            }
            j=j+2;
            i=i+2;
        }
        return nums[i-1];
    }
};


//Time complexity O(n)
