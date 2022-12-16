class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int mm = m - 1;
        int nn = n - 1;
        int sum = m + n - 1;
    
        while( mm >= 0 && nn >= 0 )
        {
            if( nums1[ mm ] > nums2[ nn ] )
                nums1[ sum-- ] = nums1[ mm-- ];
            else
                nums1[ sum-- ] = nums2[ nn-- ];
        }
    
        while( nn >= 0 )
            nums1[ sum-- ] = nums2[ nn-- ];
    }
};
