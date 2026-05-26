class Solution {
public:
    int dx[8]={-1,-1,-1,0,0,1,1,1};
    int dy[8]={-1,0,1,-1,1,-1,0,1};

    void dfs(int i,int j,vector<vector<char>>& grid){
        int n=grid.size();
        int m=grid[0].size();

        grid[i][j]='W';

        for(int k=0;k<8;k++){
            int ni=i+dx[k];
            int nj=j+dy[k];

            if(ni>=0 && nj>=0 && ni<n && nj<m && grid[ni][nj]=='L'){
                dfs(ni,nj,grid);
            }
        }
    }

    int countIslands(vector<vector<char>>& grid){
        int n=grid.size();
        int m=grid[0].size();

        int cnt=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='L'){
                    cnt++;
                    dfs(i,j,grid);
                }
            }
        }
        return cnt;
    }
};