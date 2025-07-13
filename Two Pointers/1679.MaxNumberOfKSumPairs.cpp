class Solution {
public:
    int maxOperationsOn2(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0,j=0;
        int cnt=0;
        for(i=0;i<n-1;i++){
            if(nums[i]==-1)
            continue;
            for(j=i+1;j<n;j++){
                if(nums[j]==-1)
                continue;
                if(nums[i]+nums[j]==k){
                    cnt++;
                    nums[i]=-1;
                    nums[j]=-1;
                    break;
                }
            }
        }
        return cnt;
    }

    int maxOperationsOlogn(vector<int>& nums, int k){
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int left=0,right=n-1,cnt=0;
        while(left<right){
            if(nums[left]+nums[right]==k){
                cnt++;
                left++;
                right--;
            }
            else if(nums[left]+nums[right]<k){
                left++;
            }
            else{
                right--;
            }
        }
        return cnt;
    }

    int maxOperationsOn(vector<int>& nums, int k){
        int n=nums.size();
        unordered_map<int,int>freq;
        int i,cnt=0;
        for(i=0;i<n;i++){
            if(freq.find(k-nums[i])!=freq.end() && freq[k-nums[i]]>0){
                cnt++;
                freq[k-nums[i]]--;
            }
            else{
                freq[nums[i]]++;
            }
        }
        return cnt;
    }
};