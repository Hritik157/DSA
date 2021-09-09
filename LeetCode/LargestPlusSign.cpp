/*
https://leetcode.com/problems/largest-plus-sign/
*/
class Solution {
public:
    int orderOfLargestPlusSign(int n, vector<vector<int>>& mines) {
        vector<vector<int>>grid(n,vector<int>(n,n));
        
        for(auto m:mines){
            grid[m[0]][m[1]]=0;
        }
        
        for(int i=0;i<n;i++){
            
            
            for(int j=0,left=0;j<n;j++){
                if(grid[i][j]==0)left=0;
                else left+=1;
                grid[i][j]=min(grid[i][j],left);
            }
            
        
            for(int k=n-1,right=0;k>=0;k--){
                if(grid[i][k]==0)right=0;
                else right+=1;
                grid[i][k]=min(grid[i][k],right);
            }
            
            
            for(int j=0,top=0;j<n;j++){
                if(grid[j][i]==0)top=0;
                else top+=1;
                grid[j][i]=min(grid[j][i],top);
            }
             
            for(int k=n-1,bottom=0;k>=0;k--){
                if(grid[k][i]==0)bottom=0;
                else bottom+=1;
                grid[k][i]=min(grid[k][i],bottom);
            }
            
            }
            
            int mxorder=0;
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    mxorder=max(mxorder,grid[i][j]);
                }
            }
        
        return mxorder;
        }
    };
