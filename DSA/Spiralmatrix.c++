/*
    Given a positive integer n, generate an n x n matrix filled with elements from 1 to n2 in spiral order.

 
*/

//Answer 

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int >>matrix(n  , vector<int>(n));
      

         int value = 1 ; 
               int left = 0;
              int right = n-1;
              int up = 0;
              int bottom  = n - 1 ; 

        while(value <= n*n){
            
        

              for(int  i = left ; i<= right ; i++){
                     matrix[up][i] =   value;
                     value++;
                   
                     
              }
              up++;

              for(int i = up ; i<= bottom ; i++){
             matrix[i][right] = value ; 
                     value++;;
                
              }
              right--;

              for(int i = right ; i>=left ; i--){
               matrix[bottom][i] = value ; 
                     value++;
                
              }
              bottom--;

              for(int  i = bottom ; i>=up ; i--){
                matrix[i][left] = value ; 
                     value++;
              
              }
              left++;
        }
             

             return matrix ; 
    }
};