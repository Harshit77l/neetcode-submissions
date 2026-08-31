class Solution {
public:
    int findMin(vector<int> &nums) {
        int small = *min_element(nums.begin(),nums.end());
        return small;
    }
};
