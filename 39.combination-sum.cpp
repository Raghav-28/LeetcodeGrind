/*
 * @lc app=leetcode id=39 lang=cpp
 *
 * [39] Combination Sum
 */

// @lc code=start
class Solution {
public:

    void solve(int index, int target, vector<int>& candidates,vector<vector<int>>& ans, vector<int>& curr){
         if(target==0){
                ans.push_back(curr);
            
            return;
         }
        
        if(index==candidates.size() || target <0){
            return;
        }

            curr.push_back(candidates[index]);
            solve(index,target-candidates[index],candidates,ans,curr);
            curr.pop_back();

        //not pick
        solve(index+1,target,candidates,ans,curr);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> curr;

        solve(0,target,candidates,ans,curr);
        return ans;
    }
};
// @lc code=end

