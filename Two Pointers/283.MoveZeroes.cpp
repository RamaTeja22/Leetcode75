class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int zero=0,nonzero=0;
        while(zero<n && nonzero<n){
            while(zero<n && nums[zero]!=0)
            zero++;

            // ensuring we search for nonZero atleast after zero
            nonzero = max(zero, nonzero);
            while(nonzero<n && nums[nonzero]==0)
            nonzero++;
            if(zero<n && nonzero<n)
            swap(nums[zero++],nums[nonzero]);
        }
    }
};