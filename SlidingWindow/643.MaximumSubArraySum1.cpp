class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double avg=0.0;
        int n=nums.size();
        int i,currSum=0,maxSum=0;
        currSum = accumulate(nums.begin(),nums.begin()+k,0);
        maxSum = currSum;
        for(i=k;i<n;i++){
            currSum = currSum-nums[i-k]+nums[i];
            maxSum = max(maxSum,currSum);
        }
        avg = (double)maxSum/k;
        return avg;
    }
};