class Solution {
    public int waysToMakeFair(int[] nums) 
    {
        int total_even=0;
        int total_odd=0;

        for(int i=0;i<nums.length;i++)
        {
            if(i%2==0)
            total_even=total_even+nums[i];
            else
            total_odd=total_odd+nums[i];
        }

        int new_even=0;
        int new_odd=0;

        int left_odd=0;
        int left_even=0;
        int count=0;

        for(int i=0;i<nums.length;i++)
        {
            if(i%2==0)
            {
                new_even=left_even+(total_odd-left_odd);
                new_odd=left_odd+(total_even-nums[i]-left_even);
                left_even=left_even+nums[i];
            }
            else{
                new_odd=left_odd+(total_even-left_even);
                new_even=left_even+(total_odd-nums[i]-left_odd);
                left_odd=left_odd+nums[i];
            }

            if(new_even==new_odd)
            count ++;
        }

        return count;
    }
}