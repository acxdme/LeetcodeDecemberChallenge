/*
Time complexity :
Space complexity :
My approach :
*/

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n = nums.size();
        int low = INT_MAX, mid = INT_MAX;
        if(n < 3 ) return false;
        for(int i=0;i<n;i++)
        {
            if( nums[i] <= low )
                low = nums[i];
            else if( nums[i] <= mid )
                mid = nums[i];
            else
                return true;
        }
        
        return false;
        
    }
};
