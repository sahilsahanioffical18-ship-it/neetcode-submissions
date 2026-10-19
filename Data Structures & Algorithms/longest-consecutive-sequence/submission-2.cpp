class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      map<int,int>mp;
      int count=1;
      int max_c=0;
      for(auto it : nums)mp[it]++;
      for(auto it : mp){
        if(mp.find((it.first+1))!=mp.end())count++;
        else {
            max_c=max(max_c,count);
            count=1;
        }
      }
      return max_c;
    }
};
