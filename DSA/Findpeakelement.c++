/*
problem statement 

A peak element is an element that is strictly greater than its neighbors.

Given a 0-indexed integer array nums, find a peak element, and return its index. If the array contains multiple peaks, return the index to any of the peaks.

You may imagine that nums[-1] = nums[n] = -∞. In other words, an element is always considered to be strictly greater than a neighbor that is outside the array.

You must write an algorithm that runs in O(log n) time.



*/

//code 

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
     int  n = nums.size() ; 
    
int low = 0 ; 
int high = n - 1 ; 

while(low < high ){
      int mid = low  + (high - low ) / 2 ; 

      if(nums[mid] < nums[mid + 1]){
        low = mid + 1 ; 
      }
      else{
        high = mid ;
      }
}
    
     return low ; 
         
    }
};