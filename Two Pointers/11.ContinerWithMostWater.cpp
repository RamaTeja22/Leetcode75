class Solution {
public:
    int maxArea(vector<int>& height) {
        int area=INT_MIN;
        int n=height.size();
        int left=0,right=n-1;
        while(left<right){
            int curr = min(height[right],height[left])*(right-left);
            area = max(area,curr);

            // move pointer logically
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }
        return area;
    }
};