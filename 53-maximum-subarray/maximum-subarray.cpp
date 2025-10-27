class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int s=INT_MIN;
        int t=0;
        for(int i=0;i<nums.size();i++){
            t=t+nums[i];
            if(t>s){
                s=max(s,t);
            }
            if(t<0){
                t=0;
            }
        }
        return s;
    }
};