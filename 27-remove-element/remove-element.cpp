class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int c=0;
        vector<int> a;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                c++;
                a.push_back(nums[i]);
            }
        }
        nums=a;
        return c;
    }
};