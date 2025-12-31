class Solution {
public:
    int missingNumber(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        int c=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]==c){
                c++;
            }
            else{
                break;
            }
        }
        return c;
    }
};