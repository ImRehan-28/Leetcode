class Solution {
    void solve (vector<int>&nums,vector<int>output,int index,vector<vector<int>>&ans)
    {
        if(index>=nums.size())
        {
            ans.push_back(output);
            return ;
        }

        //exclude
        solve(nums,output,index+1,ans);
        int element=nums[index];
        output.push_back(element);
        //include
        solve(nums,output,index+1,ans);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        vector<vector<int>> ans;
        vector<int>output;
        int s=0;
        solve(nums,output,s,ans);

        return ans;
    }
};