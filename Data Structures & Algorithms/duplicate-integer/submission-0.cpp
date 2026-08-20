class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
      set<int>seen;
      int n = nums.size();
      for(auto i : nums){
        if(seen.count(i)) return true;
        seen.insert(i);
      }
      return false;
    }
};