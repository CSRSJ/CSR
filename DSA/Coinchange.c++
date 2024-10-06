/*

You are given an integer array coins representing coins of different denominations and an integer amount representing a total amount of money.

Return the fewest number of coins that you need to make up that amount. If that amount of money cannot be made up by any combination of the coins, return -1.

You may assume that you have an infinite number of each kind of coin.

 

Example 1:

Input: coins = [1,2,5], amount = 11
Output: 3
Explanation: 11 = 5 + 5 + 1

*/
class Solution {
public:
 int solve(vector<int>& coins , int index , int amount , vector<vector<int>> &dp ){
       
              //base case 
              if(index == 0){
                 if( amount % coins[index] == 0 ){
                     return amount / coins[index]; 
                 }
                 else{
                    return INT_MAX - 1 ; 
                 }
              }
             if(dp[index][amount] != -1){
                return dp[index][amount]; 
             }

              //exclude 
       int  exclude  =  solve(coins , index-1 , amount , dp) ; 
    

              // include
              int include = INT_MAX ; 
                 if(coins[index] <= amount){
                     
     include  = 1 + solve(coins , index  , amount - coins[index] , dp ); 
          
                 }

            
dp[index][amount] = min(include , exclude) ; 

return dp[index][amount] ; 
            
 }

    int coinChange(vector<int>& coins, int amount) {
             int n = coins.size() ; 

        vector<vector<int>>dp(n , vector<int>(amount+1 , -1)) ; 
               if (amount == 0) {
            return 0;  
        }
        
           int result =  solve(coins , n - 1  , amount  , dp );       
           return (result == INT_MAX - 1) ? -1 : result ; 
    }
};