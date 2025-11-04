/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap;
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

           
            if (numMap.find(complement) != numMap.end()) {
              
                ans.push_back(numMap[complement]);
                ans.push_back(i);
                return ans;
            }


            numMap[nums[i]] = i;
        }
        return ans;
    }
};
// @lc code=end

