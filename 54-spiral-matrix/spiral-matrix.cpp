class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {

        int m = mat.size() , n = mat[0].size();
        int srow = 0 , endrow = m-1;
        int scol = 0 , endcol = n-1;

        vector<int>ans;

        while(srow <= endrow && scol <= endcol){
            //top
            for(int j =scol ; j<=endcol ; j++){
                ans.push_back(mat[srow][j]);
            }
            //right
             for(int i = srow + 1 ; i<=endrow ; i++){
                ans.push_back(mat[i][endcol]);
            }
            //bottom

            for(int j =endcol-1 ; j>=scol  ; j--){
                if(srow == endrow){
                    break;
                }
                ans.push_back(mat[endrow][j]);
            }
             
            //left
             for(int i =endrow-1 ; i>=srow+1 ; i--){
                if(scol == endcol){
                    break;
                }
                ans.push_back(mat[i][scol]);
            }

            srow++;
            endrow--;
            scol++;
            endcol--;
        }


        return ans;
    }
};