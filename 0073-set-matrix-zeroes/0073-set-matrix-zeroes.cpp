class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        for(int row=0; row<r; row++ ){
            for(int col=0; col<c; col++){
                if(matrix[row][col]==0){
                   
                    //i am iterating row i need row size == no. of col 
                    for(int i=0; i<c; i++){
                        if(matrix[row][i]!=0){
                            matrix[row][i]='k';
                        }
                    }
            
                    
                    // i am iterating col i need col size==no. of row
                    for(int j=0; j<r; j++){
                        if(matrix[j][col]!=0){
                            matrix[j][col]='k';
                        }
                    }
                }
            }
        }
         for(int row=0; row<r; row++ ){
            for(int col=0; col<c; col++){
                if(matrix[row][col]=='k'){
                    matrix[row][col]=0;
                }
            }
         }
    }
};