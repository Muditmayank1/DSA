class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int a = INT_MIN;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum = sum+nums[i];
            if(a<sum){
                a=max(sum,a);
            }
            if(sum<=0){
                sum=0;
            }
        }
        return a;
    }
};