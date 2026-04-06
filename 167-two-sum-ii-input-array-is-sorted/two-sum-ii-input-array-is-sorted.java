class Solution {
    public int[] twoSum(int[] numbers, int target) {
        int[] dd = new int[2];
        for(int i=0;i<numbers.length-1;i++){
            for(int j=i+1;j<numbers.length;j++){
                if(numbers[i]+numbers[j]==target){
                    dd[0] = i+1;
                    dd[1] = j+1;
                    return dd;
                }
            }
        }
        return new int[0];
    }
}