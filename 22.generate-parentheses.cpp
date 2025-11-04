/*
 * @lc app=leetcode id=22 lang=cpp
 *
 * [22] Generate Parentheses
 */

// @lc code=start
class Solution {
public:
    void backtrack(vector<string>& result, string current, int open, int close, int n) {
   
    if (current.size() == 2 * n) {
        result.push_back(current);
        return;
    }


    if (open < n)
        backtrack(result, current + "(", open + 1, close, n);

    if (close < open)
        backtrack(result, current + ")", open, close + 1, n);
}

    vector<string> generateParenthesis(int n) {
        vector<string> result;
        backtrack(result,"",0,0,n);
        return result;
    }
};
// @lc code=end

