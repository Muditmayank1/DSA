class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int l = 0;
        int h = n*m-1;
        while(l<=h){
            int mid = l+(h-l)/2;
            int a = mid/m;
            int b = mid%m;
            if(matrix[a][b]==target){
                return true;
            }
            else if(matrix[a][b]<target){
                l = mid+1;
            }
            else{
                h = mid-1;
            }
        }
        return false;
    }
};