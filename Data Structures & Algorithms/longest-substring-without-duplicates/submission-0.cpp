class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int n = s.length();
        int temp=0,res=0;
        for(int i = 0;i<n;i++){
            if(mp.find(s[i]) != mp.end()){
               temp=max(mp[s[i]]+1,temp);
            }
            mp[s[i]]=i;
            res=max(res,i-temp+1);
        }
        return res;
    }
};
