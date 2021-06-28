class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i = 0; i< nums.size(); i++) {
            int x = nums[i];
            for(int j = 0; j < nums.size(); j++) {
                if (i != j && x + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
    }
};
