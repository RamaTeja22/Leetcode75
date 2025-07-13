class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n= nums.size();
        int small=INT_MAX,big=INT_MAX;
        int i;
        for(i=0;i<n;i++){
            if(nums[i]<=small){
                small=nums[i];
            }
            else if(nums[i]<=big){
                big=nums[i];
            }
            else
            return true;
        }
        return false;
    }
};