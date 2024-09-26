class Solution {
// using o(log n ); 

public:

       int   Findfirstleft(vector<int>& nums , int target ){  
        
        int start = 0 ; 
        int end = nums.size()-1 ; 
        int first = -1 ; 

        while(start <= end){

        
      
         int mid = start + (end - start)/2;
      
       
         if(nums[mid] == target){
             first = mid ; 
             end = mid - 1 ; 
         }
          if(nums[mid] > target){
            end = mid - 1 ; 
         }
     if (nums[mid] < target) {
           start = mid + 1 ; 
        }

        }
        return first ; 
       

     }

     int   Findlastright(vector<int>& nums , int target ){  
        
        int start = 0 ; 
        int end = nums.size()-1 ; 
        int last = -1 ; 

        while(start <= end){

        
      
         int mid = start + (end - start)/2;
      
       
         if(nums[mid] == target){
             last = mid ; 
             start = mid + 1 ; 
         }
          if(nums[mid] > target){
            end = mid - 1 ; 
         }
     if (nums[mid] < target) {
           start = mid + 1 ; 
        }

        }
        return last ; 
       

     }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans; 
  
            if(nums.empty()){
                return  {-1 , -1};
            }

               int n = nums.size() - 1 ; 

          if(target > nums[n] ){
            return {-1 , -1};
          }
           
           int left = Findfirstleft(nums , target) ; 
           if(left == -1){
            return {-1 , -1};
           }

           int right = Findlastright(nums , target);

           return {left , right} ; 
       
    }
};