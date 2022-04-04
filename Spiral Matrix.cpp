class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
       int row=matrix.size();
        int col=matrix[0].size();
        vector<int> v;
    int irow=0;
    int frow=row-1;
    int icol=0;
    int fcol=col-1;
        while(irow<=frow&&icol<=fcol)
        {
            if(irow<=frow&&icol<=fcol){
       for(int j=icol;j<=fcol;j++){
        v.push_back(matrix[irow][j]);
       }
                irow++;
        }
            if(irow<=frow&&icol<=fcol){
       for(int i=irow;i<=frow;i++){
        v.push_back(matrix[i][fcol]);
      }
                fcol--;
            }
            if(irow<=frow&&icol<=fcol){
       for(int j=fcol;j>=icol;j--){
        v.push_back(matrix[frow][j]);
       }
                frow--;
            }
        if(irow<=frow&&icol<=fcol){
       for(int i=frow;i>=irow;i--){
       v.push_back(matrix[i][icol]);
           }
            icol++;
             }
            
        }
    return v;
    
    }
                    
};
