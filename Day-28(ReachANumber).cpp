/*
Time complexity :
Space complexity :
My approach :
*/
class Solution {
public:
    int reachNumber(int target) {
        int sum =0, step = 0;
        if(target == 0 ) return 0;
         target = abs(target);
        while(sum < target)
        {
            sum += step;
            step++;
        }
        
        while( (sum - target)%2 == 1)
        {
            sum += step;
            step++;
        }
        
        return step-1;
    }
};
