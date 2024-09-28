/*

215. Kth Largest Element in an Array

Given an integer array nums and an integer k, return the kth largest element in the array.

Note that it is the kth largest element in the sorted order, not the kth distinct element.

Can you solve it without sorting?
*/

//using priorityqueue

//Answer

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size() ; 
         int value , ans ; 
          priority_queue<int>q ;
          for(int i = 0 ; i<n ; i++){
                q.push(nums[i]);
             }

        while(k >  1){
        q.pop() ;
        k--;
        }
        return q.top() ; 
    }
};