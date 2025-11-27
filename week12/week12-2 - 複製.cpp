//week12-2.cpp
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());//(有效率的排序)
        //先練習 倒過來的迴圈，打大到小印出來
        for(int i=nums.size()-1; i>=2; i--){
           if(nums[i] < nums[i-1]+nums[i-2]){
            return nums[i] + nums[i-1] + nums[i-2];
           }
        }//把大到小印出來，正確
        return 0;
    }
};
