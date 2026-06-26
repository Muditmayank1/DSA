class Solution {
    public boolean check(int[] nums) {
        boolean d = false;
        int c=0;
        for(int i=0;i<nums.length;i++){
            if(nums[i]>nums[(i+1)%(nums.length)]){
                c++;
            }
        }
        if(c<=1){
            d=true;
        }
        return d;
    }
}