class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int n = numRows;
        vector<vector<int>> a(n);
        for(int i=0;i<n;i++){
            int num=1;
            for(int k=0;k<=i;k++){
                a[i].push_back(num);
                num=num*(i-k)/(k+1);
            }
        }
        return a;
    }
};