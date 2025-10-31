class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        if(nums.size()==1){
            return nums;
        }
        vector<int> ls;
        for(int i=0;i<nums.size();i++){
            int cnt=0;
            if(ls.size()==0 || ls[0]!=nums[i]){
                for(int j=0;j<nums.size();j++){
                    if(nums[i]==nums[j]){
                        cnt++;
                    }
                }
                if(cnt>nums.size()/3){
                    ls.push_back(nums[i]);
                }
            }
            if(ls.size()==2){
                break;
            }
        }
        return ls;
    }
};