/*

iven an integer array nums, return the length of the longest strictly increasing 
subsequence
.

 

Example 1:

Input: nums = [10,9,2,5,3,7,101,18]
Output: 4
Explanation: The longest increasing subsequence is [2,3,7,101], therefore the length is 4.

*/

class Solution {
public:
    int solve(vector<int>& nums, int index, int prevIndex, vector<vector<int>>& dp) {
        int n = nums.size();
        
       
        if (index >= n) {
            return 0;
        }
        
      
        if (dp[index][prevIndex + 1] != -1) {
            return dp[index][prevIndex + 1];
        }
        
      
        int exclude = solve(nums, index + 1, prevIndex, dp);

       
        int include = 0; 
        if (prevIndex == -1 || nums[index] > nums[prevIndex]) {
            include = 1 + solve(nums, index + 1, index, dp); 
        }

       
        dp[index][prevIndex + 1] = max(include, exclude);

        return dp[index][prevIndex + 1];
    }

    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size(); 
        vector<vector<int>> dp(n, vector<int>(n + 1, -1));
        return solve(nums, 0, -1, dp); 
    }
};
