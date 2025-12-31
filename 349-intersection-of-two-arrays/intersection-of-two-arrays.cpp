class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int> a;
        int i=0,j=0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]>nums2[j]){
                j++;
            }
            else if(nums2[j]>nums1[i]){
                i++;
            }
            else{
                a.push_back(nums1[i]);
                i++;
                j++;
                while(i<nums1.size() && nums1[i-1]==nums1[i]){
                    i++;
                }
                while(j<nums2.size() && nums2[j-1]==nums2[j]){
                    j++;
                }
            }
        }
        return a;
    }
};