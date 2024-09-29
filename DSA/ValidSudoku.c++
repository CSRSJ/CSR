/*
       36. Valid Sudoku

Determine if a 9 x 9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules:

Each row must contain the digits 1-9 without repetition.
Each column must contain the digits 1-9 without repetition.
Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 without repetition.
Note:

A Sudoku board (partially filled) could be valid but is not necessarily solvable.
Only the filled cells need to be validated according to the mentioned rules.
*/
//solution 
class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
     
         
               unordered_set<char>rows[9],cols[9],boxes[9];

            for(int  i = 0 ;i<9 ; i++){
                for(int j = 0 ; j<9 ; j++){

               char num = board[i][j];

               if(num !=  '.'){

                if(rows[i].count(num) > 0) return false ; 
                       rows[i].insert(num);

               if(cols[j].count(num) > 0) return false ; 
                       cols[j].insert(num);
                 
                     
                     int boxindex = (i /3)*3 + (j / 3);

                     if(boxes[boxindex].count(num) > 0) return false ;
                     boxes[boxindex].insert(num);
               }
           

               }
                }

                return true ; 
            }

    
};
