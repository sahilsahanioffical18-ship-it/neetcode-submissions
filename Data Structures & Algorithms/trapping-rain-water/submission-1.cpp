class Solution {
public:
    int trap(vector<int>& nums) {
        int n=nums.size();
        vector<int>prefix(n);
        vector<int>suffix(n);
        suffix[0]=nums[0];
        int suff=suffix[0];
        for(int i=1;i<n;i++){
            if(nums[i]>suff){
                suffix[i]=nums[i];
                suff=nums[i];
            }
            else suffix[i]=suff;
        }
        int pre=0;
        prefix[n-1]=nums[n-1];
        pre=nums[n-1];
        for(int i=n-2;i>=0;i--){
            if(nums[i]>pre){
                pre=nums[i];
                prefix[i]=nums[i];
            }
            else prefix[i]=pre;
        }
        int area=0;
        for(int i=1;i<n-1;i++){
            area+=(min(prefix[i],suffix[i])-nums[i]);
        }
        return area;
    }
};
