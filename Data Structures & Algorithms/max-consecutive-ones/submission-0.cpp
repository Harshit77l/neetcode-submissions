class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
       int n = nums.size();
       int maxno=0;
       int final=0;
       for(int i =0;i<n;i++){
         if(nums[i]==0){
            final=max(final,maxno);
            maxno=0;
         }else{
            maxno++;
         }
       }
       return max(final,maxno);
    }
};