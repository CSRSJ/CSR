/*
You are given weights and values of items, and put these items in a knapsack of capacity W to get the maximum total value in the knapsack. Note that we have only one quantity of each item.
In other words, given two integer arrays val and wt which represent values and weights associated with items respectively. Also given an integer W which represents knapsack capacity, find out the maximum sum values subset of val[] such that the sum of the weights of the corresponding subset is smaller than or equal to W. You cannot break an item, either pick the complete item or don't pick it (0-1 property).

Examples :

Input: W = 4, val[] = {1,2,3}, wt[] = {4,5,1}
Output: 3
Explanation: Choose the last item that weighs 1 unit and holds a value of 3. 

*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
   
 int solve(int W, vector<int>& weight, vector<int>& val, int index, vector<vector<int>>& dp) {
    if (index < 0) {
        return 0;
    }

    if (dp[index][W] != -1) {
        return dp[index][W];
    }

    int exclude = solve(W, weight, val, index - 1, dp);  // Pass dp in recursive call

    int include = 0;
    if (weight[index] <= W) {
        include = val[index] + solve(W - weight[index], weight, val, index - 1, dp);  // Pass dp in recursive call
    }

    dp[index][W] = max(include, exclude);
    return dp[index][W];
}

  
    int knapSack(int W, vector<int>& wt, vector<int>& val ) {
        
        int index = wt.size() ; 
        
        vector<vector<int>>dp(index , vector<int>(W+1 , -1)) ; 
    
       return solve(W , wt , val , index-1 , dp ) ; 
    } 
};

//{ Driver Code Starts.

int main() {
    // taking total testcases
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        // reading number of elements and weight
        int n, w;
        vector<int> arr, val, wt, drr;
        string ip;
        int number;
        getline(cin, ip);
        stringstream ss(ip);

        while (ss >> number) {
            arr.push_back(number);
        }

        getline(cin, ip);
        ss.clear();
        ss.str(ip);

        while (ss >> number) {
            val.push_back(number);
        }

        w = arr[0];
        n = val.size();
        getline(cin, ip);
        ss.clear();
        ss.str(ip);

        while (ss >> number) {
            wt.push_back(number);
        }
        Solution ob;
        cout << ob.knapSack(w, wt, val) << endl;
    }
    return 0;
}
// } Driver Code Ends