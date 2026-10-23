class Solution {
public:
    int maxArea(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        int ma=INT_MIN;
        while(i<j){
            int area=(j-i)*min(nums[i],nums[j]);
            ma=max(ma,area);
            if(nums[i]<nums[j])i++;
            else j--;
        }
        return ma;
        
    }
};
