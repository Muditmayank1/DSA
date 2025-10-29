class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> a(n,vector<int>(m));
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                a[j][m-i-1] = matrix[i][j];
            }
        }
        matrix = a;
    }
};