class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        vector<int>res;
        for(auto i:nums1){
            res.push_back(i);
        }
        for(auto i:nums2){
            res.push_back(i);
        }
        sort(res.begin(),res.end());
        int total=res.size();
        if(total%2==0){
           return (res[total/2-1]+res[total/2])/2.0;
        }
        else{
            return res[total/2];
        }
    }
};
